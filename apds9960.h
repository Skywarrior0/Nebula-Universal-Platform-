#include <avr/io.h>

#ifndef apds9960_H_INCLUDED
#define apds9960_H_INCLUDED

#define proxEnable 0x8

#define enableReg 0x80
//reserved 7
#define GEN 6
#define PIEN 5
#define AIEN 4
#define WEN 3
#define PEN 2
#define AEN 1
#define  PON 0
//////////////////////////////////////////////
#define waitTimeReg 0x83

//PROXIMITY INTERRUPT THRESTHOLD
#define pilt 0x89
#define piht 0x8B
// PERSISTENCE REGISTER 0x8C
#define persReg 0x8C
#define configOne 0x8D
#define proxpulse_count 0x8E
#define controlOne 0x8F
#define configTwo 0x90
#define idReg 0x92
#define statusReg 0x93
#define proxData 0x9C
#define proxUROffset 0x9D
#define proxDLOffset 0x9E
#define configThree 0x9F
#define gestureProxEnterThreshold 0xA0
#define gestureProxExitThreshold 0xA1
#define gestureConfigOne 0xA2
#define gestureConfigTwo 0xA3
#define gestureUpOffset 0xA4
#define gesturePulseCountLength 0xA6


#endif 
