#include <stdio.h>
#include <stdlib.h>

main()
{
	int valorinteiro;
	printf("Escreva o valor inteiro desejado: ");
	scanf ("%d", &valorinteiro);
	if (valorinteiro>0)
	{
	printf("Valor inteiro positivo.\n");
	}
	if (valorinteiro<0)
	{
	printf("Valor inteiro negativo.\n");
	}
	if (valorinteiro!=0);
	else
	{
	printf("Valor inteiro nulo.\n");
	}
	system("pause");
	
}