#include "system.h"
#include <stdio.h>

char ADCInit(int anpins)
{
    int ADCValue;
    AD1PCFG = anpins;  // AN5 as analog, all other pins are digital
    AD1CON1 = 0x0000; // SAMP bit = 0 ends sampling and starts converting
                      // AD1CHS = 0x0002;  // Connect AN2 as S/H+ input
    // in this example AN2 is the input
    AD1CSSL = 0;
    AD1CON3 = 0x0002; // Manual Sample, Tad = 3Tcy
    AD1CON2 = 0;
    AD1CON1bits.ADON = 1; // turn ADC ON
}

int AnalogRead(int ch)
{
    AD1CHS = ch;          // 1. select analog input channel
    AD1CON1bits.SAMP = 1; // 2. start sampling
                          // 3. wait for sampling time
    delay(100);         // 6.25 us
    AD1CON1bits.DONE = 1; // 4. start the conversion
    while (!AD1CON1bits.DONE)
        ; // 5. wait for the conversion to complete
    return ADC1BUF0;
}
