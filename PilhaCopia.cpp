#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaPilha.h"

void converteDecimal(int dec, int base) {
	tPilha p;
	inicializa(&p);
	
	while(dec > 0) {
		push(&p, (dec % base));
		dec = dec / base;
	}
	
	mostraPilha(p);
