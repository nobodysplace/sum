/*
 * main.c
 *
 *  Created on: 06.04.2015
 *      Author: Patrick
 */

#include <stdio.h>

#include "part.h"


int main(void){
	initStruk();
	printf("Aktuelle Zahl %d\n", getname());

	setName(5);
	printf("Aktuelle Zahl %d\n", getname());
	return 0;
}
