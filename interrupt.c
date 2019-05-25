#include <avr/io.h>
#include <avr/interrupt.h>
#include "interrupt.h"


unsigned char intSetup(void)
{
    	//GIMSK= (1<<INT0); // interrupt mask register to interrupt 0
    	MCUCR  |=(0<<ISC01); //preset conditions to enable interrupt for logic low
    	MCUCR  |=(0<<ISC00);//""""""""""""""""""""""""""""""""""""""""""""""""""""
    	sei();
	return 0;
}

ISR(INT1_vect)
{
	//what to do when interrupt happens
	//depends on results of calculations
	//i2c_write();//clear interrupt
}

ISR(INT0_vect)
{
	//what to do when water becomes hot
	solOff();//turn solenoid off
	systemNoGo();//flash warning led because of temp ;(
}

unsigned char test(void)
{
	
;
}