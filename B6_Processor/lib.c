#include <stdio.h>

#define STM 0
#define ATM 1
#define PIC 2

#if MCU == STM

void Blinkled()
{
    DRC =!DRC;
    delay(1000);
}

#elif MCU == ATM
void Blinkled()
{
    ALU =!ALU;
    delay(1000);
}

#elif MCU == PIC
void Blinkled()
{
    AIT =! AIT;
    delay(1000);
}

#endif
