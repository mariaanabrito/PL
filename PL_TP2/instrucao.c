#include "instrucao.h"

Instrucao *addInst(Instrucao *inst, Instrucao *pilha)
{
	if(pilha == NULL)
	{
		return inst;
	}
	else
	{
		inst->prox = pilha;
		return inst;
	}
}

