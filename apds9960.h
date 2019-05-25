#include <avr/io.h>

#ifndef apds9960_H_INCLUDED
#define apds9960_H_INCLUDED

#define proxEnable 0x8

//Enable Register 0x80
//reserved 7
#define GEN 6
#define PIEN 5
#define AIEN 4
#define WEN 3
#define PEN 2
#define AEN 1
#define  PON 0
//WAIT TIME REGISTER 0x83
#define WTIME[7]
//PROXIMITY INTERRUPT THRESTHOLD
#define PILT 0x89
#define PIHT 0x8B
// PERSISTENCE REGISTER 0x8C
#define PPERS 


#endif 
