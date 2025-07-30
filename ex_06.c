#include <stdio.h>
#include <stdlib.h>

main()
{
	int anosdevida,diasdevida;
	printf("Escreva seus anos de vida: ");
	scanf ("%d", &anosdevida);
	diasdevida = anosdevida*365;
	printf("Ola, voce ja viveu %d dias.\n",diasdevida);
	system("pause");

}