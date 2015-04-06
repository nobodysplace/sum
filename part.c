/*
 * part.c
 *
 *  Created on: 06.04.2015
 *      Author: Patrick
 */

#include <string.h>

#include "part.h"


typedef struct{
	unsigned int zahl;
}Strukt;

Strukt aStruk;

void initStruk(void){
	aStruk.zahl = 1;
}

void setName(int aName){
	aStruk.zahl = aName;
}

int getname(void){
	return aStruk.zahl;
}
