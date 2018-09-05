DECLARACOES
array[5];
i;
j;
swapped;
temp;
n;
GO
i=0;
while(i < 5)
{
	GET array[i];
	i = i+1;
}
i=0;
swapped=0;
while(i < 5)
{
	j=0;
	swapped = 0;
	while(j < 5)
	{
		n = j+1;
		if(array[j] > array[n])
		{
			temp = array[j];
			array[j] = array[n];
			array[n] = temp;

			swapped = 1;
		}
		j = j+1;
	}

	if(swapped == 0)
	{
		i = 6;
	}
	i = i+1;
}
i=0;
PUT "Os números ordenados decrescentemente são:\n";
PUT "[";
while(i < 4)
{
	PUT array[i];
	PUT ", ";
	i=i+1;
}
PUT array[4];
PUT "]";
STOP