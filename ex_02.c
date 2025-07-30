#include <stdio.h>
#include <stdlib.h>

main()
{
	float valor1,valor2,quociente;
	printf("Escreva valor1: ");
	scanf ("%f", &valor1);
	printf("Escreva valor2: ");
	scanf ("%f", &valor2);
	if (valor2 !=0)
	{
	 quociente = valor1 / valor2;
	 printf("O quociente possui o valor de:%.2f\n", quociente); 
	}
	else
		{
		printf("Nao existe divisao por zero.\n"); 
		}
	system("pause");
}