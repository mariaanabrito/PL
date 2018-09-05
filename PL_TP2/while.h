#ifndef _WHILECICLE
#define _WHILECICLE

typedef struct whilecicle
{
	int endr_inicio; // Endereço do início do ciclo
	int endr_fim;	// Endereço da instrução a seguir ao ciclo, ou seja, sai do ciclo
	struct whilecicle *prox;
}WhileCicle;

#endif