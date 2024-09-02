
![Logo](https://via.placeholder.com/600x150?text=Your+Logo+Here+600x150)


# Designing a rootkit in SMM

A brief description of what this project does and who it's for comes here.


## Tools
In this section, you should mention the hardware or simulators utilized in your project.
- Qemu
- libvirt
- virt-manager
- docker

## Implementation Details
the implementation details of this project are given to you in the following steps:

### Setting Up the Environment

#### **Clone the Rootkit and EDK II repositories:**
first we need to compile our SMM with the rootkit on it. We can use docker for this matter. Docker would give us an OS-level virtualization. since SMM support is depricated in the newer versions of EDK II, keep in mind to use version `vUDK2018` of EDK II. Please note that you may need sudo permissions for running some of the following commands.
   ```bash
   git clone git@github.com:jussihi/SMM-Rootkit.git
   cd SMM-Rootkit
   git clone git@github.com:tianocore/edk2.git
   cd edk2
   git checkout vUDK2018
   cd ..
   ```

   For using docker environment, you can start by entering the Docker environment:
   ```bash
   ./run_docker.sh
   ```

#### **Build the BaseTools**
   Once inside the Docker environment, navigate to the `edk2` directory and build the base tools necessary for compiling the firmware:
   ```bash
   cd edk2
   make -C BaseTools
   source ./edksetup.sh
   exit
   ```
   After setting up the base tools, you need to copy the rootkit files into the EDK II project directory:
   ```bash
   cp -r ../SMM-Rootkit/* edk2/
   ```

#### **Making Some Minor changes in the code**
##### Change Saving directory
Since writing directly to driver C is not possible for regular users, we need to change saving directory of `smm.txt` to something else. We changed the directory to `C:/smm/smm.txt`. keep in mind to create folder smm in drive C after creating the virtual machine.  
##### Removing the part for restoring that IAT hook
Remove the part for restoring IAT hook as indicated in the following [link](https://github.com/jussihi/SMM-Rootkit/blob/1ac885f1cd1496159aad08fe072250fbb34ca079/SMM%20Rootkit/SMMRootkit/WinUmdIATHook.c#L213-L239)

#### **Final Compilation**

   Re-enter the Docker environment and proceed with the final compilation:
   
   ```bash
   ./run_docker.sh
   cd edk2
   source ./edksetup.sh
   build -DSMM_REQUIRE
   ```

#### **Locate the Compiled Firmware**

   After the build process completes, the firmware files will be located in the following directory:
   ```bash
   edk2/Build/OvmfX64/RELEASE_GCC5/FV
   ```
   Look for files starting with `OVMF`, which will include the compiled firmware that now contains the rootkit.

### Create a Virtual Machine with the infected Firmware
In the next step, we need to create a virtual macine with the infected firmware we built in our previous step.

#### Move Compiled Firmware Files
Move the firmware files (`OVMF_CODE.fd`, `OVMF_VARS.fd`) to a directory accessible by QEMU or libvirt. `/usr/share/OVMF/rootkit/` is used as an example.

#### Create a JSON Firmware Descriptor
Create a firmware descriptor file to map the firmware files. Create file `/usr/share/qemu/firmware/60-ovmf-rootkit-x86_64.json` with the following content:
```json
{
    "description": "UEFI SMM rootkit OVMF firmware for x86_64",
    "interface-types": [
        "uefi"
    ],
    "mapping": {
        "device": "flash",
        "executable": {
            "filename": "/usr/share/OVMF/rootkit/OVMF_CODE.fd",
            "format": "raw"
        },
        "nvram-template": {
            "filename": "/usr/share/OVMF/rootkit/OVMF_VARS.fd",
            "format": "raw"
        }
    },
    "targets": [
        {
            "architecture": "x86_64",
            "machines": [
                "pc-i440fx-*",
                "pc-q35-*"
            ]
        }
    ],
    "features": [
        "acpi-s3",
        "amd-sev",
        "verbose-dynamic"
    ],
    "tags": [

    ]
}
```
#### Create and Configure the Virtual Machine: 
1. Launch virt-manager
```bash
sudo virt-manager
```
2. Start the creation of a new virtual machine and select "Local install media" for the installation method.
3. Choose the installation media. for this project we used Windows 10 22H2 Build 19045 version 64-bit Interprise edition. You can download the iso from this [link](https://www.microsoft.com/en-us/evalcenter/download-windows-10-enterprise). keep in mind that downloading any other version or edition of windows would cause problem in the following steps.
![image](https://github.com/user-attachments/assets/6e7709d9-70dd-46bd-b439-abd82f77fe2d)
4. Allocate the necessary CPU and memory resources
5. check "customize configuration before install"
   - Set the chipset to Q35
   - Select Firmware to `OVMF_CODE_4M.fd` (this is not the infected firmware. we first need to install windows before changing our firmware to infected firmware)
6. We select `Begin Installation` at the top left corner.
7. Now you must start Installing windows.
8. After Installing windows, turn of your virtual machine and navigate to `edit->prefernces' in `virt-manager` and select `enable XML editing` in the general section.
9. after applying your changes, navigate to details of your virual machine and view its XML version.
10. change the loader from the default OVMF to your infected firmware
```XML
  <os>
    <type arch="x86_64" machine="pc-q35-6.2">hvm</type>
    <loader readonly="yes" type="pflash">/usr/share/OVMF/rootkit2/OVMF_CODE.fd</loader>
    <nvram>/var/lib/libvirt/qemu/nvram/win10-3_VARS.fd</nvram>
    <boot dev="hd"/>
  </os>
```
Now your Virtual Machine would be ready for testing.

### **Running the Sample Program**

#### **Program Description:**
   - The sample program provided is a simple C++ application designed to interact with the rootkit you have integrated into the firmware. The program repeatedly calls the `GetCurrentProcessId` function in a loop and outputs the result.

#### **Code Example:**
   - Below is the sample C++ code provided in the document:
     ```cpp
     #include <iostream>
     #include <string>
     #include <Windows.h>

     int main() {
         std::string a;
         while (std::cin >> a) {
             std::cout << "Process id is: " << GetCurrentProcessId() << std::endl;
         }
     }
     ```

since we don't have visual studio already installed on our virtual machine. we need to use another machine for the following steps, or we can install visual studio on the machine.

#### **Setting Up the Development Environment:**
   - You will need to use **Visual Studio** to compile this sample program. Ensure that the **Desktop Development with C++** workload is installed.

#### **Compiling the Program:**
   - Open the project file `windows_x64_umd_iat.sln` in Visual Studio.
   - Configure the project to use the **Multi-threaded Debug** runtime library:
     1. Right-click on the project in Visual Studio and select `Properties`.
     2. Navigate to `C/C++ -> Code Generation`.
     3. Set the `Runtime Library` option to **Multi-threaded Debug (/MTd)**.

#### **Building the Executable:**
   - Build the solution by selecting `Build Solution` from the `Build` menu in Visual Studio.
   - The compiled executable will be generated in the output directory specified in the project settings.

#### **Running the Program on the Virtual Machine:**
   - Transfer the compiled executable (`.exe`) to the virtual machine running the infected firmware. You can use any file transfer method, such as using a simple HTTP file server.
   - Rename the executable to `smm_rootkit.exe` to ensure it matches the name expected by the rootkit.
   - Execute the program on the VM to interact with the rootkit.

## How to Run

After following the steps described above, you now have a virtual machine with the infected firmware on it.
Once you have placed the `smm_target.exe` file on your virtual machine, the next steps involve running the program, monitoring its interaction with the rootkit, and verifying that the rootkit is functioning as intended. Here’s how you can proceed:

### **Running `smm_target.exe` on the Virtual Machine**
#### **Launch the Virtual Machine:**
   - Start your virtual machine (VM) with the infected firmware using your virtualization software (e.g., QEMU, Virt-Manager).
   - Ensure that the VM is configured to use the modified firmware that contains the rootkit.

#### **Transfer the Executable:**
   - If you haven't already done so, transfer the `smm_target.exe` file to the VM. This can be done using various methods like an HTTP file server, SCP, or a shared folder, depending on your setup.

#### **Execute the Program:**
   - On the VM, navigate to the directory where `smm_target.exe` is located and run the executable:
   - The program will start executing and repeatedly call the `GetCurrentProcessId` function, which should be intercepted by the rootkit.

### **Monitoring and Verifying Rootkit Activity**
#### **Monitor the Serial Console:**
   - The rootkit is designed to log its activity or provide output through a serial console. To observe this output, connect to the VM's serial console:
     ```bash
     virsh console win10
     ```
   - Watch for any messages or logs to indicate the rootkit status.

#### **Check for Log Files:**
   - the rootkit would create a log file `smm.txt` in a `C:/smm/smm.txt`.
   - Navigate to the directory in your VM’s file explorer or use the command line to check if the log file is present.
   - Review the contents of the log file to confirm that the rootkit has successfully intercepted the function calls made by `smm_target.exe`.

## Results
In this section, you should present your results and provide an explanation for them.

Using image is required.

## Related Links
Some links related to your project come here.
 - [EDK II](https://github.com/tianocore/edk2)
 - [ESP32 Pinout](https://randomnerdtutorials.com/esp32-pinout-reference-gpios/)
 - [Django Doc](https://docs.djangoproject.com/en/5.0/)


## Authors
Authors and their github link come here.
- [@Author1](https://github.com/Sharif-University-ESRLab)
- [@Author2](https://github.com/Sharif-University-ESRLab)

