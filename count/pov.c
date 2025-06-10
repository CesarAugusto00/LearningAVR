// ------- Preamble -------- //
#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>
// -------- Functions --------- //
void POVDisplay(uint8_t oneByte) {
	PORTB = oneByte;
	//_delay_ms(4);
}
int main(void) {
	// -------- Inits --------- //
	DDRB = 0xff; /* Set up all of LED pins for output */
	// ------ Event loop ------ //
	while (1) { /* mainloop */
		POVDisplay(0b01100000);
		_delay_ms(20000);
		POVDisplay(0b11011010);
		_delay_ms(20000);
		POVDisplay(0b11110010);
		_delay_ms(20000);
		POVDisplay(0b01100110);
		_delay_ms(20000);
		POVDisplay(0b10110110);
		_delay_ms(20000);
		
		
		PORTB = 0;
		_delay_ms(10);
	} /* end mainloop */
	return (0);
}