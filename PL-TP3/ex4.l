%option noyywrap
%x DOCUMENT COUNTRY CITY LOCATION PERSON NAME RESTO APELIDO TIME TACTIC EVENT SPECIAL
%{
	#include <ctype.h>
	char* datas[30];
	char* nomes[30];
	char* nomesIncertos[30];
	char* cidades[30];
	char* localidades[30];
	char* paises[30];
	char* eventos[30];
	char* taticas[30];
	char* anos[30];
	char* nome;
	char* data;
	int c = 0;
	int p = 0;
	int l = 0;
	int n = 0;
	int nI = 0;
	int d = 0;
	int e = 0;
	int t = 0;
	int a = 0;
	char* trim(char*);
	char* trim2(char*);
	void replace(char *s);
	int contains(char* s, char* array[], int size);
%}

%%
"<?xml version=\"1.0\" encoding=\"UTF-8\"?>" {}
"<document>" {BEGIN DOCUMENT;}
<DOCUMENT>"<ENAMEX TYPE=\"COUNTRY\">" {BEGIN COUNTRY;}
<DOCUMENT>"<ENAMEX TYPE=\"CITY\">" {BEGIN CITY;}
<DOCUMENT>"<ENAMEX TYPE=\"LOCATION\">" {BEGIN LOCATION;}
<DOCUMENT>"<ENAMEX TYPE=\"PERSON\">" {BEGIN PERSON;}
<DOCUMENT>"<TIMEX TYPE=\"DATE\">" {BEGIN TIME;}
<DOCUMENT>"<ENAMEX TYPE=\"TACTIC\">" {BEGIN TACTIC;}
<DOCUMENT>"<ENAMEX TYPE=\"EVENT\">" {BEGIN EVENT;}
<DOCUMENT>"<ENAMEX TYPE=\"NAME\" CERTEZA=\"??\">" {BEGIN NAME;}
<COUNTRY>[^<]+ {
						if(contains(trim(yytext), paises,p) == 1)
							paises[p++] = strdup(trim(yytext));
					}
<COUNTRY>"</ENAMEX>" {BEGIN DOCUMENT;}
<CITY>[^<]+ {
				if(contains(trim(yytext), cidades,c) == 1)
							cidades[c++] = strdup(trim(yytext));
			}
<CITY>"</ENAMEX>" {BEGIN DOCUMENT;}
<LOCATION>[^<]+ {
					if((strncmp(yytext, "Este", 4) != 0) && (strncmp(yytext, " Este", 4) != 0))
						if(contains(trim(yytext),localidades,l) == 1)
							localidades[l++] = strdup(trim(yytext));
				}
<LOCATION>"</ENAMEX>" {BEGIN DOCUMENT;}
<PERSON>[^<]+ {
					if(contains(trim(yytext), nomes,n) == 1)
							nomes[n++] = strdup(trim(yytext));
			  }
<PERSON>"</ENAMEX>" {BEGIN DOCUMENT;}
<NAME>[^<]+ {nome = strdup(yytext); BEGIN RESTO;}
<RESTO>"</ENAMEX> e <ENAMEX>" {
								strcat(nome, "e");
								BEGIN APELIDO;
								}
<RESTO>"</ENAMEX>" {if(contains(trim(nome), nomesIncertos,nI) == 1)
						nomesIncertos[nI++] = trim(nome);
					BEGIN DOCUMENT;
				}
<APELIDO>[^<]+ {
					strcat(nome, strdup(yytext));
					if(contains(trim(nome), nomesIncertos,nI) == 1)
						nomesIncertos[nI++] = trim(nome);
				}
<APELIDO>"</ENAMEX>" {BEGIN DOCUMENT;}
<TIME>[^<]+ {
				data =strdup(yytext);
				int length = strlen(yytext);
				anos[a++] = strdup(yytext+(length -5));
				BEGIN SPECIAL;
			}
<TIME>"</TIMEX>" {BEGIN DOCUMENT;}
<SPECIAL>"<ENAMEX>Novembro" {strcat(data,"Novembro de 1848");}
<SPECIAL>" </ENAMEX> de 1848 " {} 
<SPECIAL>"</TIMEX>" {datas[d++] = data; BEGIN DOCUMENT;}
<EVENT>[^<]+ {if(contains(trim(yytext), eventos,e) == 1)
							eventos[e++] = strdup(trim(yytext));
			 }
<EVENT>"</ENAMEX>" {BEGIN DOCUMENT;}			 
<TACTIC>[^<]+ {if(contains(trim(yytext), taticas,t) == 1)
							taticas[t++] = strdup(trim(yytext));
			 }
<TACTIC>"</ENAMEX>" {BEGIN DOCUMENT;}
<DOCUMENT>.|\n {}
\n {}
%%

char *trim(char *s) 
{
	int l = strlen(s);
	char *r = malloc(l * sizeof(char));
	int i, j,k;

	for(i = 0; i < l && (s[i] == ' ' || s[i] == '\n'); i++);

	for(j = l - 1; j > 0 && s[j] == ' ' || s[j] == '\n';j--);

	for(k = i,k=0; i <= j; i++) 
	{
		r[k++] = s[i];
	}
	
	r[k] = '\0';

	char *ret = malloc(strlen(r) * sizeof(char));

	for(i = 0, j=0; i < strlen(r); i++) 
	{
		if(r[i] == '\n')
			r[i] = ' ';
		if(r[i] == '-')
		{
			ret[j++] = r[i];	
		}
		if(r[i] == '/')
		{
			ret[j++] = r[i];	
		}
		else if(isalnum(r[i]) || r[i] == ' ') 
		{
			ret[j++] = r[i];
		}
	}

	ret[j] = '\0';

	if(strcmp(ret,"Glria")==0)
		ret = strdup("Gloria");
	else if(strcmp(ret,"D Joo V")==0)
		ret = strdup("D Joao V");
	else if(strcmp(ret,"Fernando de Castro Abreu e Magalhes")==0)
		ret = strdup("Fernando de Castro Abreu e Magalhaes");
	else if(strcmp(ret,"Leonor de Castro Abreu e Magalhes")==0)
		ret = strdup("Leonor de Castro Abreu e Magalhaes");
	else if(strcmp(ret,"Maria Barbosa Abreu e Bacelar de So Nicolau de Basto")==0)
		ret = strdup("Maria Barbosa Abreu e Bacelar de Sao Nicolau de Basto");
	else if(strcmp(ret,"Jos Gonalves Moreira") == 0)
		ret = strdup("Jose Goncalves Moreira");
	else if(strcmp(ret,"Domingos Jos Teixeira Pena") == 0)
		ret = strdup("Domingos Jose Teixeira Pena");
	else if(strcmp(ret,"Jos Leite Pinto Saldanha de Miranda") == 0)
		ret = strdup("Jose Leite Pinto Saldanha de Miranda");
	else if(strcmp(ret,"Jernimo de Castro Abreu de Magalhes") == 0)
		ret = strdup("Jeronimo de Castro Abreu de Magalhaes");
	else if(strcmp(ret,"Fernando de Castro Abreu Magalhes") == 0)
		ret = strdup("Fernando de Castro Abreu Magalhaes");

	return ret;
}


char* trim2(char *s) 
{
	char *r;
	int i,j;

	r = malloc(strlen(s) * sizeof(char));

	for(i = 0,j=0; i < strlen(s); i++) {
		if(isalnum(s[i]) != 0 || s[i] == '-') {
			r[j++] = s[i];
		}
	}

	r[j] = '\0';

	if(strcmp(r,"Glria")==0)
		r = strdup("Gloria");

	return r;
}

void replace(char *s) 
{
	int i;

	for(i = 0; i < strlen(s); i++) {
		if(s[i] == ' ') 
			s[i] = '+';
	}
}

int contains(char* s, char* array[], int size)
{
	int i;
	int res = 1;
	if(size > 0)
	{
		for(i=0; i< size; i++)
		{ 
			if(strcmp(s,array[i]) == 0)
				res = 0;
		}
	}
	return res;
}

int main()
{
	yylex();
	FILE *file, *people, *cities, *countries, *locations, *events, *tactics, *dates;
	int i;

	file = fopen("processador.html", "w");

	fprintf(file,"<html><head><meta charset = 'UTF-8'/></head><body>");
	fprintf(file, "<h1 style=\"color:   #b71c1c;\"> Processador de Named Identities </h1>");
	fprintf(file,"<body style=\"background-color:  #f9ebea;\">");

	if(n > 0)
	{
		fprintf(file, "<li><a href='pessoas.html'> Pessoas </a></li>");
		people = fopen("pessoas.html", "w");
		fprintf(people,"<html><head><meta charset = 'UTF-8'/></head><body>");
		fprintf(people, "<h2 style=\"color: #0277bd;\">Lista de Pessoas:</h2>");
		fprintf(people,"<body style=\"background-color:   #d4e6f1;\">");
		for(i = 0; i < n; i++)
		{
			fprintf(people, "<p><strong style=\"color: #0277bd\">--> </strong> %s\n", nomes[i]);
			fprintf(people, "<center><img src=\"pessoas/%s.png\" width=250></center>\n", trim2(nomes[i]));
		}
	

		if(nI > 0)
		{
			fprintf(people, "\n<h2 style=\"color: #0277bd;\">Lista de Pessoas Incertas:</h2>");
			for(i = 0; i < nI; i++)
			{
				fprintf(people, "<p><strong style=\"color: #0277bd\">--> </strong> %s\n", nomesIncertos[i]);
				fprintf(people, "<center><img src=\"pessoas/%s.png\" width=250></center>\n", trim2(nomesIncertos[i]));
			}
		}
		fclose(people);
	}

	if(c > 0)
	{
		fprintf(file, "<li><a href='cidades.html'> Cidades </a></li>\n");
		cities = fopen("cidades.html", "w");
		fprintf(cities,"<html><head><meta charset = 'UTF-8'/></head><body>");
		fprintf(cities, "\n<h2 style=\"color:  #e91e63;\">Lista de Cidades:</h2>");
		fprintf(cities,"<body style=\"background-color: #fce4ec;\">");
		char html[120];
		for(i = 0; i < c; i++)
		{
			
			char *city;
			city = strdup(trim2(cidades[i]));

			char* url = trim(cidades[i]);
			replace(url);

			if(strcmp(url,"Gloria") == 0)
				url = "Gloria,Brasil";

			fprintf(cities, "<li><a href=%s> %s </a></li>\n", url, trim(cidades[i]));
			FILE *f = fopen(url, "w");
			fprintf(f, "<h2 style=\"color:  #00FF00;\"> %s </h2>", trim(cidades[i]));

			fprintf(cities, "<center><img src=\"bandeiras/%s.png\" width=250></center>\n", trim2(cidades[i]));

			

			sprintf(html, "www.google.pt/maps/place/%s", url);
			fprintf(f, "<meta http-equiv=\"refresh\" content=\"0;url=http://%s\">", html);
			fclose(f);
		}
		fclose(cities);
	}

	if(p > 0)
	{
		fprintf(file, "<li><a href='paises.html'> Países </a></li>\n");
		countries = fopen("paises.html", "w");
		fprintf(countries,"<html><head><meta charset = 'UTF-8'/></head><body>");
		fprintf(countries, "<h2 style=\"color:  #f4511e;\">Lista de Países:</h2>");
		fprintf(countries,"<body style=\"background-color:  #fbe9e7;\">");
		for(i = 0; i < p; i++)
		{
			if(strcmp(paises[i],"Mo") == 0) paises[i] = "Macau";
			fprintf(countries, "<p><strong style=\"color: #f4511e\">--> </strong> %s\n", paises[i]);
			fprintf(countries, "<center><img src=\"bandeiras/%s.png\" width=250></center>\n", trim2(paises[i]));
		}
		fclose(countries);
	}

	if(l > 0)
	{
		fprintf(file, "<li><a href='localidades.html'> Localidades </a></li>\n");
		locations = fopen("localidades.html", "w");
		fprintf(locations,"<html><head><meta charset = 'UTF-8'/></head><body>");
		fprintf(locations,"<body style=\"background-color: #f3e5f5;\">");
		fprintf(locations, "<h2 style=\"color:  #ab47bc;\">Lista de Localidades:</h2>");
		for(i = 0; i < l; i++)
		{
			fprintf(locations, "<p><strong style=\"color: #ab47bc\">--> </strong> %s\n", localidades[i]);
			fprintf(locations, "<center><img src=\"localidades/%s.png\" width=250></center>\n", trim2(localidades[i]));
		}
		fclose(locations);
	}


	if(e > 0)
	{ 

		fprintf(file, "<li><a href='eventos.html'> Eventos </a></li>\n");
		events = fopen("eventos.html", "w");
		fprintf(events,"<html><head><meta charset = 'UTF-8'/></head><body>");
		fprintf(events, "<h2 style=\"color:  #01579b;\">Lista de eventos:</h2>");
		fprintf(events,"<body style=\"background-color: #c5cae9;\">");
		for(i = 0; i < e; i++)
		{
			fprintf(events, "<p><strong style=\"color: #01579b\">--> </strong> %s\n", eventos[i]);
			fprintf(events, "<center><img src=\"eventos/%s.png\" width=250></center>\n", trim2(eventos[i]));

		}
		fclose(events);
	}
	
	if(t > 0)
	{ 

		fprintf(file, "<li><a href='taticas.html'> Táticas de combate </a></li>\n");
		tactics = fopen("taticas.html", "w");
		fprintf(tactics,"<html><head><meta charset = 'UTF-8'/></head><body>");
		fprintf(tactics, "<h2 style=\"color:  #f39c12;\">Lista de Táticas de combate:</h2>");
		fprintf(tactics,"<body style=\"background-color:  #ffe0b2 ;\">");
		for(i = 0; i < t; i++)
		{
			fprintf(tactics, "<p><strong style=\"color: #f39c12\">--> </strong> %s\n", taticas[i]);
			fprintf(tactics, "<center><img src=\"taticasdecombate/%s.png\" width=250></center>\n", trim2(taticas[i]));
		}
		fclose(tactics);
	}

	if(d > 0)
	{ 

			fprintf(file, "<li><a href='datas.html'> Datas </a></li>\n");
			dates = fopen("datas.html", "w");
			fprintf(dates,"<html><head><meta charset = 'UTF-8'/></head><body>");
			fprintf(dates, "<h2 style=\"color:   #2ecc71 ;\">Lista de Datas:</h2>");
			fprintf(dates,"<body style=\"background-color:  #e8f5e9;\">");
			for(i = 0; i < d; i++)
			{
				fprintf(dates, "<p><strong style=\"color: #2ecc71\">--> </strong> %s\n", datas[i]);
			}
			fclose(dates);
	}

	int dataI = 9999;
	int dataS = -1;

	int data;
	for(i = 0; i < a; i++)
	{
		data = atoi(anos[i]);
		if(data != 0)
		{
			if(data > dataS)
				dataS = data;
			if(data < dataI)
				dataI = data;
		}
	}

	if(d > 0)
	{ 
		fprintf(file,"<p>A história decorreu entre <strong style=\"color: red; text-decoration: underline;\">%d</strong> e <strong style=\"color: red; text-decoration: underline;\">%d</strong>.</p><p>&nbsp;</p>",dataI, dataS);
	}
	
	fprintf(file,"<p>&nbsp;</p><p>&nbsp;</p><p>&nbsp;</p><p>&nbsp;</p><p><strong>Grupo 10:</strong></p><p>Bruno Pereira, a75135</p><p> Diogo Silva, a76407</p><p> Maria Ana de Brito, a73580</p>");

	fclose(file);
	return 0;
}