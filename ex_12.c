#include <stdio.h>
#include <stdlib.h>

main()
{
	float valor1,valor2,resultado;
	printf("Escreva valor1: ");
	scanf ("%f", &valor1);
	printf("Escreva valor2: ");
	scanf ("%f", &valor2);
	resultado = valor1 + valor2;
	if (resultado >=10)
	{
	printf("O resultado possui o valor de:%.2f\n", resultado);
	}
	else
	{
	printf("Soma inferial a 10\n");
	}
	system("pause");
}