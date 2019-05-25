/*
 * Nebula 0.1.c
 *
 * Created: 1/11/2019 2:48:09 AM
 * Author : Mergon Pierre
 * Website: Amstartechnology.com
 */ 
/*
Initialize Ports, Initialize I2C, I2C write default data

*/
#include <avr/io.h>
#include "config.h"
#include "interrupt.h"
#include "i2c.h"
#include "indicate.h"
#define nebula 0x39



int main(void)
{		DDRD =(0xFF);
		//unUsed();//disable unused ports
		//i2c_init();//initialize i2c
		//intSetup();//enables external interrupt 
		//sei();
		//solOn();
		//ISR(INT1_vect);
		//i2c_init();
		//i2c_start(nebula);
		//i2c_readAck(nebula);//data for proximity sensor 
		//test();
		//intSetup();
		i2c_init();
		i2c_start(nebula);
		i2c_write(0x92);
		i2c_rep_start(0x3A);
		i2c_readAck();
		PORTD =(TWDR);
		i2c_stop();
		
		
		
		
    while (1) 
    {
	;
    }
}

