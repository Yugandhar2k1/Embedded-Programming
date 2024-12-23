#include <LPC214x.h>  // Header file for LPC2148

void delay(void);

int main(void) {
    // Set P0.0 to P0.15 as output
    IO0DIR |= 0xFF;  // Set the lower 16 bits (P0.0 to P0.15) as output (LEDs)

    while (1) {
        // Turn ON all LEDs (set P0.0 to P0.15 to 1)
        IO0SET = 0xFF;  // Set all bits from P0.0 to P0.15 to HIGH
        delay();

        // Turn OFF all LEDs (clear P0.0 to P0.15)
        IO0CLR = 0xFFFF;  // Set all bits from P0.0 to P0.15 to LOW
        delay();
    }
}

void delay(void) {
	   unsigned int i;
    for ( i = 0; i < 1000000; i++)
		{ 
		}			// Simple delay loop
}
