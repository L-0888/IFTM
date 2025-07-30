#include <stdio.h>
#include <stdlib.h>

main()
{
	int quantidadenumero,i;
	quantidadenumero=1000;
	printf("Os numeros impares de 1 a 1000, sao: \n");
	for (i=1;i <= quantidadenumero; i=i+2)
	{
	printf(" %d,", i);
	}
	printf("  \n" );
	system("pause");
}