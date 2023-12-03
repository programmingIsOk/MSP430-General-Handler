#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	P2DIR = 255;
	P2OUT = 0;
	while (1) {
	    int timer = 0;
	    P2OUT++;
	    while (timer != 500)
	        timer++;
	}
	return 0;
}
