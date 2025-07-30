#include <stdio.h>
#include <stdlib.h>

main()
{
	float pesoprato,valorpago;
	printf("Escreva o peso do prato: ");
	scanf ("%f", &pesoprato);
	valorpago = pesoprato*12;
	printf("O preco do seu prato foi de:%.2f",valorpago);
	printf("reais\n");
	system("pause");

}