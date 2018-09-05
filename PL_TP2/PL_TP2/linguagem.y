%{
	#include <stdio.h>
	#include <string.h>
	#include "variavel.c"
	#include "instrucao.c"
	#include "while.h"
	#include "ifelse.h"

	extern int yylineno;

	int yylex();
	int yyerror(char *s);

	Variavel *variaveis = NULL;
	Variavel *auxVar = NULL;
	Instrucao *instrucoes = NULL;
	Instrucao *auxInst = NULL;
	WhileCicle *whiles = NULL;
	WhileCicle *auxWhile = NULL; 
	IfElse *ifelses = NULL;
	IfElse *auxIfElse = NULL;

	int globalpointer;
	int nInst = 0;
	int nWhile = 0;
	int erro = 0;

%}

%union{int numero; char *string; char *variavel;}

%token <numero> num
%token <variavel>var
%token <string>STRING
%token MULT ADD SUB DIV REST GREATER LESSER EQUAL DIFFERENT LTE GTE AND OR NOT
%token DECLARACOES GET GO STOP PUT WHILE IF ELSE ERRO

%start Prog

%%

Prog : Cabec Corpo
	 ;

Cabec : 
	  | DECLARACOES Decs {
	  				auxInst = malloc(sizeof(struct instrucao));
	  				auxInst->endr = nInst++;
	  				auxInst->nome = strdup("start");

	  				instrucoes = addInst(auxInst, instrucoes);
	  			  }
	  ;

Decs : Dec
	 | Decs Dec
	 ;

Dec : var ';' { int endr;
				endr = endrVar($1, variaveis);
				if(endr == -1) //Se não existir
				{
					auxVar = malloc(sizeof(struct variavel));
					auxVar->endr = globalpointer++;
					auxVar->nome = strdup($1);
					auxVar->init = 0;

					variaveis = addVar(auxVar, variaveis);

					auxInst = malloc(sizeof(struct instrucao));
					auxInst->endr = nInst++;
					auxInst->nome = strdup("pushi 0");
					
					instrucoes = addInst(auxInst, instrucoes);
				}
				else
				{
					erro = 1;
					fprintf(stdout, "Linha %d: Variável %s já está declarada!\n", yylineno, $1);
				}	
			  }
	| var '[' num ']' ';' {
							int endr;
							endr = endrVar($1, variaveis);

							if(endr == -1) //Se não existir
							{
								auxVar = malloc(sizeof(struct variavel));
								auxVar->endr = globalpointer;
								auxVar->nome = strdup($1);
								auxVar->init = 0;

								variaveis = addVar(auxVar, variaveis);

								char buffer[50];
								sprintf(buffer, "pushn %d", $3);

								auxInst = malloc(sizeof(struct instrucao));
								auxInst->endr = nInst++;
								auxInst->nome = strdup(buffer);

								instrucoes = addInst(auxInst, instrucoes);

								globalpointer += $3;
							}
							else
							{
								erro = 1;
								fprintf(stdout, "Linha %d: Variável %s já está declarada!\n", yylineno, $1);
							}
						  }
	;

Corpo : 
	  | GO Insts STOP {
	  					auxInst = malloc(sizeof(struct instrucao));
	  					auxInst->endr = nInst++;
	  					auxInst->nome = strdup("stop");

	  					instrucoes = addInst(auxInst, instrucoes);
	  				  }
	  ;

Insts : Inst
	  | Insts Inst
	  ;

Inst : Atrib
	 | Escrita
	 | Condicao
	 | Ciclo
	 | Leitura
	 ;

Leitura : GET var {
					int endr;
					endr = endrVar($2, variaveis);

					if(endr == -1) //Se não existir
					{
						erro = 1;
						fprintf(stdout, "Linha %d: Variável %s não está declarada!\n", yylineno, $2);
					}
					else
					{
						varInit($2, variaveis); // Se existir, marca-se como inicializada

						auxInst = malloc(sizeof(struct instrucao));
	  					auxInst->endr = nInst++;
	  					auxInst->nome = strdup("read");

	  					instrucoes = addInst(auxInst, instrucoes);

	  					auxInst = malloc(sizeof(struct instrucao));
	  					auxInst->endr = nInst++;
	  					auxInst->nome = strdup("atoi");

	  					instrucoes = addInst(auxInst, instrucoes);

	  					char buffer[50];
	  					sprintf(buffer, "storeg %d", endr);

	  					auxInst = malloc(sizeof(struct instrucao));
	  					auxInst->endr = nInst++;
	  					auxInst->nome = strdup(buffer);

	  					instrucoes = addInst(auxInst, instrucoes);
					}
				  } ';' 
        | GET var {
        			int endr;
					endr = endrVar($2, variaveis);

					if(endr == -1) //Se não existir
					{
						erro = 1;
						fprintf(stdout, "Linha %d: Variável %s não está declarada!\n", yylineno, $2);
					}
					else
					{
						varInit($2, variaveis); // Se existir, marca-se como inicializada

						char buffer[50];

						sprintf(buffer, "pushgp");

						auxInst = malloc(sizeof(struct instrucao));
					  	auxInst->endr = nInst++;
					  	auxInst->nome = strdup(buffer);

						instrucoes = addInst(auxInst, instrucoes);

						sprintf(buffer, "pushi %d", endr);

						auxInst = malloc(sizeof(struct instrucao));
					  	auxInst->endr = nInst++;
					  	auxInst->nome = strdup(buffer);

						instrucoes = addInst(auxInst, instrucoes);

						sprintf(buffer, "padd");

						auxInst = malloc(sizeof(struct instrucao));
					  	auxInst->endr = nInst++;
					  	auxInst->nome = strdup(buffer);

						instrucoes = addInst(auxInst, instrucoes);

					}
        		  }'[' Exp ']' ';' {
    		  						
        		  						auxInst = malloc(sizeof(struct instrucao));
					  					auxInst->endr = nInst++;
					  					auxInst->nome = strdup("read");

					  					instrucoes = addInst(auxInst, instrucoes);

					  					auxInst = malloc(sizeof(struct instrucao));
					  					auxInst->endr = nInst++;
					  					auxInst->nome = strdup("atoi");

					  					instrucoes = addInst(auxInst, instrucoes);

					  					auxInst = malloc(sizeof(struct instrucao));
					  					auxInst->endr = nInst++;
					  					auxInst->nome = strdup("storen");

					  					instrucoes = addInst(auxInst, instrucoes);
        		  					}
        ;

Atrib : var '=' Exps ';' {
							int endr;
							endr = endrVar($1, variaveis);

							if(endr == -1) //Se não existir
							{
								erro = 1;
								fprintf(stdout, "Linha %d: Variável %s não está declarada!\n", yylineno, $1);
							}
							else
							{
								varInit($1, variaveis); // Se existir, marca-se como inicializada

								char buffer[50];
								sprintf(buffer, "storeg %d", endr);

								auxInst = malloc(sizeof(struct instrucao));
	  							auxInst->endr = nInst++; 
	  							auxInst->nome = strdup(buffer);

								instrucoes = addInst(auxInst, instrucoes);
							}
						 }
	  | var {
				int endr;
				endr = endrVar($1, variaveis);

				if(endr == -1) //Se não existir
				{
					erro = 1;
					fprintf(stdout, "Linha %d: Variável %s não está declarada!\n", yylineno, $1);
				}
				else
				{
					varInit($1, variaveis); // Se existir, marca-se como inicializada

					char buffer[10];
					sprintf(buffer, "pushi %d", endr);

					auxInst = malloc(sizeof(struct instrucao));
	  				auxInst->endr = nInst++;
	  				auxInst->nome = strdup(buffer);

					instrucoes = addInst(auxInst, instrucoes);
				}
	  		}
	  	'[' Exp ']' '=' Exps ';' {
	  								auxInst = malloc(sizeof(struct instrucao));
	  								auxInst->endr = nInst++;
	  								auxInst->nome = "storen";

	  								instrucoes = addInst(auxInst, instrucoes);
	  							  }
	  ;

Escrita : PUT Exps ';' {
		     			auxInst = malloc(sizeof(struct instrucao));
			  			auxInst->endr = nInst++;
			  			auxInst->nome = strdup("writei");

		     			instrucoes = addInst(auxInst, instrucoes);
					   }
		| PUT STRING ';' {
							char buffer[1024];
							sprintf(buffer, "pushs \"%s\"", $2);
							
			     			auxInst = malloc(sizeof(struct instrucao));
				  			auxInst->endr = nInst++;
				  			auxInst->nome = strdup(buffer);

			     			instrucoes = addInst(auxInst, instrucoes);
			     			auxInst = malloc(sizeof(struct instrucao));
			     			auxInst->endr = nInst++;
			     			auxInst->nome = strdup("writes");

			     			instrucoes = addInst(auxInst, instrucoes);
     		   			}
		;

Condicao : If Else;

If : IF '(' ExpBool ')' {
							auxIfElse = malloc(sizeof(struct ifelse));
							auxIfElse->endr = nInst;
							auxIfElse->prox = ifelses;
							ifelses = auxIfElse;

							auxInst = malloc(sizeof(struct ifelse));
							auxInst->endr = nInst++;
							auxInst->nome = strdup("");
							auxInst->prox = instrucoes;
							instrucoes = auxInst;
						}
	'{' Insts '}' {
					auxInst = instrucoes;
					int flag = 0;
					while(auxInst && flag == 0)
					{
						if(auxInst->endr == ifelses->endr)
						{
							flag = 1;
						}
						else
							auxInst = auxInst->prox;
					}

					char buffer[50];
					sprintf(buffer, "jz i%d", nInst+1);
					auxInst->nome = strdup(buffer);

					auxIfElse = ifelses->prox;
					free(ifelses);
					ifelses = auxIfElse;
				  }
   ;

Else : 
	 | ELSE {
	 			auxIfElse = malloc(sizeof(struct ifelse));
				auxIfElse->endr = nInst;
				auxIfElse->prox = ifelses;
				ifelses = auxIfElse;

				auxInst = malloc(sizeof(struct ifelse));
				auxInst->endr = nInst++;
				auxInst->nome = strdup("");
				auxInst->prox = instrucoes;
				instrucoes = auxInst;
	 		}
	 '{' Insts '}' {
	 					auxInst = instrucoes;
						int flag = 0;
						while(auxInst && flag == 0)
						{
							if(auxInst->endr == ifelses->endr)
							{
								flag = 1;
							}
							else
								auxInst = auxInst->prox;
						}

						char buffer[50];
						sprintf(buffer, "jump i%d", nInst);
						auxInst->nome = strdup(buffer);

						auxIfElse = ifelses->prox;
						free(ifelses);
						ifelses = auxIfElse;
	 			   }
	 ;

Ciclo : WHILE {
				nWhile = nInst;
			  }
		'(' ExpBool {
						auxWhile = malloc(sizeof(struct whilecicle));
						auxWhile->endr_inicio = nWhile;
						auxWhile->endr_fim = nInst;
						auxWhile->prox = whiles;
						whiles = auxWhile;

						auxInst = malloc(sizeof(struct instrucao));
						auxInst->endr = nInst++;
						auxInst->nome = strdup("");

						instrucoes = addInst(auxInst, instrucoes);
					}
		')' '{' Insts {
						auxInst = instrucoes;
						int flag = 0, endr_i;
						while(auxInst && flag == 0)
						{
							if(auxInst->endr == whiles->endr_fim)
							{
								flag = 1;
								endr_i = whiles->endr_inicio;
							}
							else
								auxInst = auxInst->prox;
						}

						char buffer[50];
						sprintf(buffer, "jz i%d", nInst+1); // Endereço depois do ciclo while
						auxInst->nome = strdup(buffer);

						auxWhile = whiles->prox;
						free(whiles);
						whiles = auxWhile;

						sprintf(buffer, "jump i%d", endr_i);
						auxInst = malloc(sizeof(struct instrucao));
						auxInst->endr = nInst++;
						auxInst->nome = strdup(buffer);
						instrucoes = addInst(auxInst, instrucoes);

					  }
		'}'
	  ;

ExpBool : Exps GREATER Exps {
				     			auxInst = malloc(sizeof(struct instrucao));
					  			auxInst->endr = nInst++;
					  			auxInst->nome = strdup("sup");

				     			instrucoes = addInst(auxInst, instrucoes);
						 	}
		| Exps LESSER Exps {
				     			auxInst = malloc(sizeof(struct instrucao));
					  			auxInst->endr = nInst++;
					  			auxInst->nome = strdup("inf");

				     			instrucoes = addInst(auxInst, instrucoes);
			     		   }
		| Exps EQUAL Exps {
							auxInst = malloc(sizeof(struct instrucao));
						  	auxInst->endr = nInst++;
						  	auxInst->nome = strdup("equal");

					   		instrucoes = addInst(auxInst, instrucoes);
						  }
		| Exps DIFFERENT Exps {
								auxInst = malloc(sizeof(struct instrucao));
					  			auxInst->endr = nInst++;
					  			auxInst->nome = strdup("equal");

				     			instrucoes = addInst(auxInst, instrucoes);

				     			auxInst = malloc(sizeof(struct instrucao));
					  			auxInst->endr = nInst++;
					  			auxInst->nome = strdup("not");

				     			instrucoes = addInst(auxInst, instrucoes);
							  }
		| Exps LTE Exps {
							auxInst = malloc(sizeof(struct instrucao));
				  			auxInst->endr = nInst++;
				  			auxInst->nome = strdup("infeq");

			     			instrucoes = addInst(auxInst, instrucoes);
						}
		| Exps GTE Exps {
							auxInst = malloc(sizeof(struct instrucao));
						  	auxInst->endr = nInst++;
						  	auxInst->nome = strdup("supeq");

					   		instrucoes = addInst(auxInst, instrucoes);
						}
		| NOT Exp {
	     			auxInst = malloc(sizeof(struct instrucao));
		  			auxInst->endr = nInst++;
		  			auxInst->nome = strdup("not");

	     			instrucoes = addInst(auxInst, instrucoes);
     		   	  }
		;

Exps : Exp 
	 | Exps MULT Exp {
		     			auxInst = malloc(sizeof(struct instrucao));
			  			auxInst->endr = nInst++;
			  			auxInst->nome = strdup("mul");

		     			instrucoes = addInst(auxInst, instrucoes);
	     		   	 }
	 | Exps ADD Exp {
		     			auxInst = malloc(sizeof(struct instrucao));
			  			auxInst->endr = nInst++;
			  			auxInst->nome = strdup("add");

		     			instrucoes = addInst(auxInst, instrucoes);
     		   		}
	 | Exps SUB Exp {
		     			auxInst = malloc(sizeof(struct instrucao));
			  			auxInst->endr = nInst++;
			  			auxInst->nome = strdup("sub");

		     			instrucoes = addInst(auxInst, instrucoes);
     		   		}
	 | Exps DIV Exp {
		     			auxInst = malloc(sizeof(struct instrucao));
			  			auxInst->endr = nInst++;
			  			auxInst->nome = strdup("div");

		     			instrucoes = addInst(auxInst, instrucoes);
     		   		}
	 | Exps REST Exp {
     					auxInst = malloc(sizeof(struct instrucao));
	  					auxInst->endr = nInst++;
	  					auxInst->nome = strdup("mod");

     					instrucoes = addInst(auxInst, instrucoes);
     		   		 }
	 | '(' Exps ')'
	 ;

Exp : var {
			int endr;
			endr = endrVar($1, variaveis);

			if(endr == -1) //Se não existir
			{
				erro = 1;
				fprintf(stdout, "Linha %d: Variável %s não está declarada!\n", yylineno, $1);
			}
			else
			{
				varInit($1, variaveis); // Se existir, marca-se como inicializada

				char buffer[50];
				sprintf(buffer, "pushg %d", endr);

				auxInst = malloc(sizeof(struct instrucao));
	  			auxInst->endr = nInst++;
	  			auxInst->nome = strdup(buffer);

				instrucoes = addInst(auxInst, instrucoes);
			}
		  }
	| var {
			int endr;
			endr = endrVar($1, variaveis);

			if(endr == -1) //Se não existir
			{
				erro = 1;
				fprintf(stdout, "Linha %d: Variável %s não está declarada!\n", yylineno, $1);
			}
			else
			{
				varInit($1, variaveis); // Se existir, marca-se como inicializada

				char buffer[50];

				sprintf(buffer, "pushgp");
				auxInst = malloc(sizeof(struct instrucao));
	  			auxInst->endr = nInst++;
	  			auxInst->nome = strdup(buffer);

				instrucoes = addInst(auxInst, instrucoes);

				sprintf(buffer, "pushi %d", endr);
				auxInst = malloc(sizeof(struct instrucao));
	  			auxInst->endr = nInst++;
	  			auxInst->nome = strdup(buffer);

				instrucoes = addInst(auxInst, instrucoes);

				sprintf(buffer, "padd");
				auxInst = malloc(sizeof(struct instrucao));
	  			auxInst->endr = nInst++;
	  			auxInst->nome = strdup(buffer);

				instrucoes = addInst(auxInst, instrucoes);
			}
		  }
	 '[' Exp ']' {
				 	auxInst = malloc(sizeof(struct instrucao));
				  	auxInst->endr = nInst++;
				  	auxInst->nome = strdup("loadn");

				 	instrucoes = addInst(auxInst, instrucoes);
	 			 }
	| num {
			char buffer[50];
			sprintf(buffer, "pushi %d", $1);

			auxInst = malloc(sizeof(struct instrucao));
		  	auxInst->endr = nInst++;
		  	auxInst->nome = strdup(buffer);

			instrucoes = addInst(auxInst, instrucoes);
		 } 
	;


%%

int yyerror(char *s)
{
	printf("erro:%s\n", s);
	return 0;
}

int main(int argc, char* argv[])
{

	yyparse();
	int i, count = 0;
	auxInst = instrucoes;
	while(auxInst)
	{
		count++;
		auxInst = auxInst->prox;
	}

	char** insts;
	insts = malloc(count*sizeof(char*));
	for(i = 0; i < count; i++, instrucoes= instrucoes->prox)
	{
		char buffer[1024];
		sprintf(buffer, "i%d: %s\n", instrucoes->endr, instrucoes->nome);

		insts[count-1- i] = strdup(buffer);
	}


	if(erro == 0)
	{
		for(i = 0; i < count; i++)
		{
			printf("%s", insts[i]);
		}
	}
	else printf("Frase incorreta!\n");



	return 0;	
}