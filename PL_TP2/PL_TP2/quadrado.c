DECLARACOES
x;
y;
z;
w;
flag;
GO
GET x;
GET y;
GET z;
GET w;
flag = 0;
IF(x == y)
{
	IF(x == z)
	{
		IF(x == w)
		{
			flag = 1;
		}
	}
}
IF(flag == 0)
{
	PUT "Os números não representam os lados de um quadrado!";
}
ELSE
{
	PUT "Os números representam os lados de um quadrado!";	
}

STOP