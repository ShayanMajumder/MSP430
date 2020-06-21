#include <msp430.h>				


/**
 * main.c
 */
void main(void)
{
	WDTCTL = WDTPW | WDTHOLD;		// stop watchdog timer
	//P1DIR |= BIT0;      // configure P1.0 as output
	P4DIR|=BIT7 ;       //set p4.7 as output

	//P1OUT|=BIT0;        //P1.0 output HIGH, LED ON
	P4OUT|=BIT7;        //P4.7 output HIGH, LED ON
}
