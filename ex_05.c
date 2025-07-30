#include <stdio.h>
#include <stdlib.h>

 main()
{
	float numeropaezinhos,numerobroas,arrecadamento,poupanca;
	printf("Escreva o numero de paezinhos: ");
	scanf ("%f", &numeropaezinhos);
	printf("Escreva o numero de broas: ");
	scanf ("%f", &numerobroas);
	arrecadamento = (numeropaezinhos*0.12)+(numerobroas*1.5);	
	printf("O arrecadamento sera de:%.2f\n", arrecadamento);
	poupanca = arrecadamento*0.1;
	printf("e a poupanca:%.2f\n", poupanca);
	system("pause");
}