/*
 * main.c
 *
 *  Created on: 06.04.2015
 *      Author: Patrick
 */

#include <stdio.h>

#include "part.h"

/**
 * cimibroker entwickeln!!!
 * @return
 */



int main(void){
	int *mod;
	initStruk();
	printf("Aktuelle Zahl %d\n", getname());

	setName(5);
	printf("Aktuelle Zahl %d\n", getname());

	initModule();
	mod=getModule();

	printf("Modul 1: %d", mod[0]);

	return 0;
}
