DECLARACOES
array[5];
x;
i;
j;
GO
i = 0;
WHILE(i < 5)
{
	GET array[i];
	i = i+1;
}
i = 4;
PUT "Os valores por ordem inversa são:\n";
PUT "[";

WHILE(i > 0)
{
	PUT array[i];
	if(i > 1)
	{
		PUT ", ";
	}
	i = i-1;
}
PUT ", ";
PUT array[0];
PUT "]";
STOP