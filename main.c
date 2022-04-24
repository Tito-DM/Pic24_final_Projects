#include <stdio.h>
#include "system.h"
#include "config.h"



int main(void){
// UART2Init();
//ADCInit(0xFFDF);
 pinsMode(&TRISD,0x0); // pass as reference
 digitalWrite(&PORTD,0xFEDF); // pass as reference
	while(1){
    // UART2PutChar("hello world");
    delay(10);
    
	//char *str;
	//sprintf(str, "%d", num); // integer to string
	}
}