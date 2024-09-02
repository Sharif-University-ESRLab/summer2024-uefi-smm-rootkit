
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

## How to Run

In this part, you should provide instructions on how to run your project. Also if your project requires any prerequisites, mention them. 

#### Examples:
#### Build Project
The project is already built for you and the results for `OVMF_CODE.fd` and 'OVMF_VARS.fd` can be found in `edk2/Build/OvmfX64/RELEASE_GCC5/FV`.

But for building the project on your own you can follow the description included in the document.

Clone the repository and navigate to `SMM-Rootkit/` and use the following commands
```bash
sudo ./run_docker.sh
cd edk2
make -C BaseTools
source ./edksetup.sh
build -DSMM_REQUIRE
```

#### Run server

```bash
  pyhton server.py -p 8080
```

| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `-p` | `int` | **Required**. Server port |



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

