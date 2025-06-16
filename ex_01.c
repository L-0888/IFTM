#include <stdio.h>
#include <stdlib.h>

main()
{
	float valor1,valor2,produto;
	printf("Escreva valor1: ");
	scanf ("%f", &valor1);
	printf("Escreva valor2: ");
	scanf ("%f", &valor2);
	produto = valor1 * valor2;
	printf("O produto possui o valor de:%.2f\n", produto); 
	system("pause");
}