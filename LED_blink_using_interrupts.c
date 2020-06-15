#include <msp430.h>

void main (void)
{
    WDTCTL = WDTPW + WDTHOLD;                 // Stop watchdog timer

    P1DIR |= BIT0;                            // Set P1.0 to output direction
    P1OUT &= ~BIT0;                           //switch off the led initially

    P1REN |= BIT1;                            // Enable P1.1 internal resistance
    P1OUT |= BIT1;                            // Set P1.1 as pull-Up resistance
    P1IES &= ~BIT1;                           // P1.1 high to low
    P1IFG &= ~BIT1;                           // P1.1 IFG cleared
    P1IE |= BIT1;                             // P1.1 interrupt enabled

    __enable_interrupt(void);                 // Enable interrupts globally

}

#pragma vector=PORT1_VECTOR
__interrupt void one(void)
{
    switch( __even_in_range( P1IV, 0x0010 )) {
    case 0x0004:
        P1OUT^=BIT0;                           //Toggeling condition
        break;
    default:
        break;

    }

}
