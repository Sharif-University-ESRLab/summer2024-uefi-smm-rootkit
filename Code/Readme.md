# Code

## KeyboardSmiHandler.c
A cutom SMI handler to read key presses and send them to an ip address using UDP (e.g. localhost in this code)

## TriggerSMI.c
A trigger to activate our custom handler using a custom SMI value

# Note
The keyboard_IO_port and keyboard_status_port are not the same for every system and might vary, 0x60 and 0x64 are for x86 systems <br>
some modern system use USB driver to communicate with input devices and it's not possible to read their IO port/buffers 