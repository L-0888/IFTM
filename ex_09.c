#include <stdio.h>
#include <stdlib.h>

 main()
{
	float numeropequenas,numeromedias,numerograndes,arrecadamento;
	printf("Escreva o numero de camisetas pequenas: ");
	scanf ("%f", &numeropequenas);
	printf("Escreva o numero de camisetas medias: ");
	scanf ("%f", &numeromedias);
	printf("Escreva o numero de camisetas grandes: ");
	scanf ("%f", &numerograndes);
	arrecadamento = (numeropequenas*10)+(numeromedias*12)+(numerograndes*15.5);	
	printf("O arrecadamento sera de de:%.2f\n", arrecadamento);
	system("pause");
}