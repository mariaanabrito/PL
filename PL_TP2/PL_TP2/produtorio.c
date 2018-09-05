DECLARACOES
n;
prod;
i;
x;
GO
n = 4;
i = 0;
prod=1;
while(i < n)
{
	GET x;
	prod = prod*x;
	i = i+1;
}
PUT "O produtório dos números lidos é ";
PUT prod;
STOP