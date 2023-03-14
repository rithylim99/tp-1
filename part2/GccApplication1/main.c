/*
 * 7 Segment Void Display.c
 *
 * Created: 3/13/2023 9:31:30 PM
 * Author : ASUS
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
    seven_segment(8);
  }
}
void seven_segment(int y)
{
	if (y==0)
	{
		PORTD = 0b11111100;
		PORTB = 0b00000000;
	}
	else if (y==1)
	{
		PORTD = 0b00011000;
	}
	else if (y==2)
	{
		PORTD = 0b01101100;
		PORTB = 0b00000001;
	}
	else if (y==3)
	{
		PORTD = 0b00111100;
		PORTB = 0b00000001;
	}
	else if (y==4)
	{
		PORTD = 0b10011000;
		PORTB = 0b00000001;
	}
	else if (y==5)
	{
		PORTD = 0b10110100;
		PORTB = 0b00000001;
	}
	else if (y==6)
	{
		PORTD = 0b11110100;
		PORTB = 0b00000001;
	}
	else if (y==7)
	{
		PORTD = 0b00011100;
	}
	else if (y==8)
	{
		PORTD = 0b11111100;
		PORTB = 0b00000001;
	}
	else if (y==9)
	{
		PORTD = 0b10111100;
		PORTB = 0b00000001;
	}
}
