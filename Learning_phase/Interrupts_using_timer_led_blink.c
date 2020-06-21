#include <msp430.h>
/*~1.045MHz is the default clock freq
 */

int main(void)
{
  WDTCTL = WDTPW + WDTHOLD;                 // Stops the watch dog timer
  P1DIR |= BIT0;                            // P1.0 output
  TA1CCTL0 = CCIE;                          // CCR0 interrupt enabled,This sets the Capture/Compare control 0 to enable Timer Interrupts.
                                            //CCIE means,Capture/Control Interrupt Enable
  TA1CCR0 = 0xFF20;                          //For  clock cycles
  TA1CTL = TASSEL_2 + MC_1 + TACLR+ ID_3;    // SMCLK(Sub system master clock)----->TASSEL_2 selects it,
                                            // Timer A mode control: 1 - Up to CCR0
                                            //available for the microcontroller
                                            //Timer A input divider: 3 - /8
                                            //contmode, clear TAR
//TA1CTL = TASSEL_2 + MC_1 + ID_3;          //Please use this incase line 12 gives an error as i am not sure why taclr is used
  __bis_SR_register(LPM0_bits + GIE);       // Enter LPM0(LowPowerMode 0),(GIE = General Interrupt Enable) enable interrupts
}

// Timer1 interrupt service routine
#pragma vector=TIMER1_A0_VECTOR
__interrupt void Timer1_A()
{
  P1OUT ^= BIT0;                            // Toggle P1.0
}
