#include <stdio.h>
#include <stdlib.h>

main()
{
	int fatorial,valordesejado,n;
	printf("Escreva valor inteiro positivo desejado: ");
	scanf ("%d", &valordesejado);
	if(valordesejado>1)
	{
	fatorial=valordesejado*(valordesejado -1);
	for (n=valordesejado-2;0 < n; n=n-1)
	{
	fatorial=fatorial*n;
	}
	printf("O fatorial do numero desejado, possui o valor de:%.d\n", fatorial);
	}
	else
	{
	printf("Nao foi possivel fazer este calculo.\n");
	}
	system("pause");
}