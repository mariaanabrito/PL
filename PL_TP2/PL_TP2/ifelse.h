#ifndef _IFELSE
#define _IFELSE

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct ifelse
{
	int endr;
	char* etiqueta;
	struct ifelse *prox;
}IfElse;

#endif