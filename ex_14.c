#include <stdio.h>
#include <stdlib.h>

main()
{
	float valor1,metade,dobro;
	printf("Escreva o valor desejado: ");
	scanf ("%f", &valor1);
	if ((valor1 >= 50)&&(valor1 <= 100))
	{
	metade = valor1 /2;
	printf("A operacao possui como resultado o valor de:%.2f\n", metade);
	}
	if (valor1 > 100)
	{
	dobro = valor1 * 2;
	printf("A operacao possui como resultado o valor de:%.2f\n", dobro);
	}
	if(valor1 >= 50);
	else
	{
	printf("Nao foi possivel fazer uma operacao, por isso o valor sera de:%.2f\n", valor1); 
	}
	system("pause");
}