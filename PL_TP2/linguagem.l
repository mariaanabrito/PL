%{
	#include "y.tab.h"
%}

%option noyywrap
%option yylineno

%%
[ \t\n] {;}
[\(\)\[\]\{\}\;\"\=] {return yytext[0];}
(?i:DECLARACOES) {return DECLARACOES;}
(?i:GO) {return GO;}
(?i:STOP) {return STOP;}
(?i:GET) {return GET;}
(?i:PUT) {return PUT;}
\"([^"]|\\\")*\" {	yylval.string = strdup(yytext+1); 
					yylval.string[strchr(yylval.string,'"')-yylval.string] = '\0';
					return STRING; 
				  }
(?i:IF) {return IF;}
(?i:ELSE) {return ELSE;}
(?i:WHILE) {return WHILE;}
\! {return NOT;}
\> {return GREATER;}
\< {return LESSER;}
\=\= {return EQUAL;}
\!\= {return DIFFERENT;}
\<\= {return LTE;}
\>\= {return GTE;}
\&\& {return AND;}
\|\| {return OR;}
\* {return MULT;}
\+ {return ADD;}
\- {return SUB;}
\/ {return DIV;}
\% {return REST;}
[0-9]+ {yylval.numero = atoi(strdup(yytext));
		return num;}
[a-z]+ {yylval.variavel = strdup(yytext);
		return var;}
. {return ERRO;}

