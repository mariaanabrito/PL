DECLARACOES
n;
x;
y;
acc;
i;
GO
GET n;
PUT "Os números ímpares são:\n";
i=0;
while(i < n)
{
	GET x;
	if(x%2 > 0)
	{
		PUT x;
		PUT "  \n";
		acc = acc+1;
	}
	else
	{
		x = 0;
	}
	i = i+1;
}
PUT "\nO total de números ímpares é: ";
PUT acc;
STOP