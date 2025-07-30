#include <stdio.h>
#include <stdlib.h>

 main()
{
	float numerosanduiche,quiloqueijo,quilopresunto,quilohamburguer;
	printf("Escreva o numero de sanduiches: ");
	scanf ("%f", &numerosanduiche);
	quiloqueijo = numerosanduiche*0.1;
	quilopresunto = numerosanduiche*0.05;
	quilohamburguer= numerosanduiche*0.1;	
	printf("A quantidade, em quilos de queijo sera de:%.2f\n", quiloqueijo);
	printf("A quantidade, em quilos de presunto sera de:%.2f\n", quilopresunto);
	printf("A quantidade, em quilos de carne sera de:%.2f\n", quilohamburguer);
	system("pause");
}