/*
 * part.c
 *
 *  Created on: 06.04.2015
 *      Author: Patrick
 */

#include <string.h>

#include "part.h"
// define the grümpel

int aktuelleModule[16];

typedef enum{
	DIGITAL_INPUT_8PUNKT,
	RELAIS
}IB_Module;

typedef enum{
	INPUT_STATISCH,
	NICHT_BELEGT
}IB_Object;

typedef struct{
	IB_Object kanalFunktion;
}Kanal;

typedef struct{
	IB_Module modultyp;
	int modulnummer;
	Kanal funktion[8];
}Modul;

typedef struct{
	unsigned int number;
}SubStrukt;

typedef struct{
	unsigned int zahl;
	SubStrukt aSub;
}Strukt;

// Start mit fcts
Strukt aStruk;
Modul modul1;


void initStruk(void){
	aStruk.zahl = 1;
}

void setName(int aName){
	aStruk.zahl = aName;
}

int getname(void){
	return aStruk.zahl;
}

int getModulNummer(void){
	return modul1.modulnummer;
}

void initModule(void){
	modul1.modultyp = DIGITAL_INPUT_8PUNKT;
	modul1.modulnummer=1;
	aktuelleModule[1]=modul1.modulnummer;
	modul1.funktion[0].kanalFunktion=INPUT_STATISCH;
}

int *getModule(void){
	return (int *)aktuelleModule;
}

