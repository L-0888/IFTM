#include <stdio.h>
#include <stdlib.h>

main()
{
	int valormaximo,valorminimo,p;
	printf("Escreva o primeiro valor desejado: ");
	scanf ("%d", &valorminimo);
	printf("Escreva o segundo valor desejado: ");
	scanf ("%d", &valormaximo);
	printf("Os numeros pares entre esses valores sao:");
	if(valormaximo>valorminimo)
	{
	for (p=valorminimo;p <= valormaximo; p=p+1){
	if(p%2==0)
	printf("%d,", p);
	}
	}
	else
	{
	for (p=valormaximo;p <= valorminimo; p=p+1){
	if(p%2==0)
	printf("%d,", p);
	}
	}
	printf("  \n" );
	system("pause");
}