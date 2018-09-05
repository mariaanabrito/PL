#ifndef _VARIAVEL
#define _VARIAVEL

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct variavel
{
	int endr;
	char* nome;
	int init;
	struct variavel *prox;
}Variavel;


Variavel *addVar(Variavel *var, Variavel *pilha);
int endrVar(char* nome, Variavel *pilha);
void varInit(char* nome, Variavel *pilha);
int isVarInit(char* nome, Variavel *pilha);

#endif