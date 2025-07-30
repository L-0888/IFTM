#include <stdio.h>
#include <stdlib.h>

main()
{
	int valormaximo,i,p;
	printf("Escreva maior valor desejado: ");
	scanf ("%d", &valormaximo);
	printf("Os numeros impares<coluna1> e os pares<coluna2> desejados, sao: \n");
	for (i=1;i <= valormaximo; i=i+1)
	{
	if(i%2==0)
	printf(" %d\n", i);
	else
	{
	if(i>=11)
	printf("%d   ", i);
	else
	printf("%d    ", i);
	}
	}
	printf(" \n");
	system("pause");
}