#ifndef _INSTRUCAO
#define _INSTRUCAO

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct instrucao
{
	int endr;
	char* nome;
	struct instrucao *prox;
}Instrucao;

Instrucao *addInst(Instrucao *inst, Instrucao *pilha);

#endif