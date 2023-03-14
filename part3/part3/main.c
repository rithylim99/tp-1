/*
 * 7_segment(3).c
 *
 * Created: 3/12/2023 6:53:08 PM
 * Author : LENOVO
 */ 

#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRD = 0b11111100;
	DDRB = 0b00000001;
    /* Replace with your application code */
    while (1) 
    {
		//number zero
		PORTD = 0b11111100;
		PORTB &= 0b00000000;
		_delay_ms(1000);
		//number one
		PORTD = 0b00011000;
		PORTB &= 0b00000000;
		_delay_ms(1000);
		//number two
		PORTD = 0b01101100;
		PORTB |= 0b00000001;
		_delay_ms(1000);
		//number three
		PORTD = 0b00111100;
		PORTB |= 0b00000001;
		_delay_ms(1000);
		//number four
		PORTD = 0b10011000;
		PORTB |= 0b00000001;
		_delay_ms(1000);
		//number five
		PORTD = 0b10110100;
		PORTB |= 0b00000001;
		_delay_ms(1000);
		//number six
		PORTD = 0b11110100;
		PORTB |= 0b00000001;
		_delay_ms(1000);
		//number seven
		PORTD = 0b00011100;
		PORTB ^= 0b00000001;
		_delay_ms(1000);
		//number eight
		PORTD = 0b11111100;
		PORTB |= 0b00000001;
		_delay_ms(1000);
		//number nine
		PORTD = 0b10111100;
		PORTB |= 0b00000001;
		_delay_ms(1000);
    }
}

