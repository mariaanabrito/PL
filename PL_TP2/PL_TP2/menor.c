DECLARACOES
n;
i;
x;
min;
GO
GET n;
GET min;
i=1;
WHILE(i < n)
{
	GET x;
	IF(min > x)
	{
		min = x;
	}
	ELSE
	{
		x = 0;
	}

	i = i+1;
}
PUT "O menor número é o ";
PUT min;
STOP