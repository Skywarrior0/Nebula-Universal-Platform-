#include <avr/io.h>
#ifndef config_H_INCLUDED
#define config_H_INCLUDED
#define  F_CPU 1000000UL


unsigned char unUsed(void);//unused ports
unsigned char solOn(void);//solenoid on
unsigned char solOff(void);//solenoid off
unsigned char sleepy(void);//normal powersave sleep
unsigned char hibernate( void);//deep powersave
unsigned char distance(char range);//distance daBta to sensor
unsigned char gestureDuration(unsigned char t);//gesture timer duration 
unsigned char proxDuration(unsigned char t);//Proximity timer duration
unsigned char ledInitialize(void);//initialize led to zero
unsigned char systemGo(void);
unsigned char systemNoGo(void);
unsigned char sleep(void);





#endif