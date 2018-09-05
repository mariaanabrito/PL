#include "variavel.h"

Variavel *addVar(Variavel *var, Variavel *pilha)
{
	if (pilha == NULL)
	{
		return var;
	}
	else
	{
		var->prox = pilha;
		return var;
	}
}

int endrVar(char* nome, Variavel *pilha)
{
	int endr = -1;
	Variavel *aux = pilha;

	while(aux && endr==-1)
	{
		if(strcmp(nome, aux->nome)==0)
		{
			endr = aux->endr;
		}
		aux = aux->prox;
	}

	return endr;
}

void varInit(char* nome, Variavel *pilha)
{
	Variavel *aux = pilha;

	while(aux)
	{
		if(strcmp(nome, aux->nome) == 0)
		{
			aux->init = 1;
		}
		aux = aux->prox;
	}
}


int isVarInit(char* nome, Variavel *pilha)
{
	int flag = -1;
	Variavel *aux = pilha;

	while(aux && flag==-1)
	{
		if(strcmp(nome, aux->nome) == 0 && aux->init == 1)
		{
			flag = 1;
		}
		aux = aux->prox;
	}

	return flag;
}