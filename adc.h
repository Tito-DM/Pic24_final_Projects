
/*****************************************************************************
 * Function: ADCInit
 *
 * 
 *
 * descreption: perform adc initialization.
 *
 * Input: None.
 *
 * Output: Byte received.
 *
 *****************************************************************************/
extern char ADCInit();

/*****************************************************************************
 * Function: AnalogWrite
 *
 * Precondition: UART2Init must be called before.
 *
 * Overview: This function converts decimal data into a string
 * and outputs it into UART.
 *
 * Input: Binary data.
 *
 * Output: None.
 *
 *****************************************************************************/
extern void  AnalogWrite(unsigned char Dec);

/*****************************************************************************
 * Function: AnalogRead
 *
 * Precondition: UART2Init must be called before.
 *
 * Overview: This function converts decimal data into a string
 * and outputs it into UART.
 *
 * Input: Binary data.
 *
 * Output: None.
 *
 *****************************************************************************/
extern int  AnalogRead(int ch);

/*****************************************************************************
 * EOF
 *****************************************************************************/
