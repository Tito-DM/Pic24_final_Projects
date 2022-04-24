/***************************
 *  Projects Description
 * sistema  de climatização
 ***************************
 * FileName:        dealy.c
 * Dependencies:   	[system.h]
 * Processor:       PIC24
 * Compiler:       	MPLAB C30
 * Linker:          MPLAB LINK30
 * Author
 *~~~~~~~~~~~~~~~~~~~~~~~~~~
 * Nome: Tito Domingos Muanda
 * Nº: 57128
 * Nome:
 * Nº
 * Nome:
 * Nº
 ***************************/

#include "system.h"

void delay(int time)
{
	int count = 0; // 3. wait for sampling time
	while (count < time)
	{
		count++;
	};
}