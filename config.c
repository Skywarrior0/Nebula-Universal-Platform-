#include <avr/io.h>
#include "config.h"
#include "i2c.h"


unsigned char unUsed (void)//disable unused ports
{
	DDRB |= (1<<6)|(1<<7);
	DDRC |= (1<<0)|(1<<1)|(1<<2)|(1<<3)|(1<<6)|(1<<7);
	DDRD |= (1<<0)|(1<<1);
	DDRB |= (1<<0)|(1<<1)|(1<<2);//set as Indicator led output
	return 0;
}

//solenoid operations
unsigned char solOn(void)
{   PORTD |=(1<<5);
	PORTD =(1<<PORTD6)|(0<<PORTD7);//forward
	PORTD &= ~(1<<5);//SLEEP
	return 0;
}

unsigned char solOff(void)
{   PORTD |=(1<<5);
	PORTD =(0<<PORTD6)|(1<<PORTD7);//reverse 
	PORTD &= ~(1<<5);//SLEEP
	return 0;
}


//LED Indication Operations
unsigned char systemGo(void)
{//green connects to PB2
PORTB =(0<<PORTB2);
return 0;
}

unsigned char systemNoGo(void)
{//red led on PB0
PORTB =(0<<PORTB0);
return 0;
}
unsigned char sleep(void)//sleep led
{
;
return 0;
}

unsigned char ledInitialize(void)//initialize led to zero
{
PORTB =(1<<PORTB0)|(1<<PORTB1)|(1<<PORTB2);//set them as output, thus asmb will turn off led lights
return 0;
}

//Timer Operation 
unsigned char proxDuration(unsigned char t)//timer duration
{ TCCR0A |=(0X02);//ports not used, timer is in ctc mode 
	
	//For Proximity sensed, there is a delay of 3 seconds from the time that it does not detect a user 
	return 0;
}
unsigned char gestureDuration(unsigned char t)//timer duration
{

return 0;
}
