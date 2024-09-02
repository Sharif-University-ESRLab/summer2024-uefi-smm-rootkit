#include <stdio.h>
#include <windows.h>

void TriggerSmi()
{
    // This function writes 0x42 in the SMI register triggering our custom handler
    asm volatile("mov $0x42, %eax; out %al, $0xb2;");
}

int main() {
    while(1) {
        TriggerSmi();
        Sleep(2000); // Sleep for 2 seconds
    }
    return 0;
}