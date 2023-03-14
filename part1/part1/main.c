/*
 * 7_segment.c
 *
 * Created: 3/12/2023 1:54:16 PM
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
		PORTB = 0b00000000;
		_delay_ms(500);
		//number one
		PORTD = 0b00011000;
		_delay_ms(500);
		//number two
		PORTD = 0b01101100;
		PORTB = 0b00000001;
		_delay_ms(500);
		//number three
		PORTD = 0b00111100;
		PORTB = 0b00000001;
		_delay_ms(500);
		//number four
		PORTD = 0b10011000;
		PORTB = 0b00000001;
		_delay_ms(500);
		//number five
		PORTD = 0b10110100;
		PORTB = 0b00000001;
		_delay_ms(500); 

    }
}
