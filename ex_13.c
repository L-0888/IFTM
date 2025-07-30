#include <stdio.h>
#include <stdlib.h>

main()
{
	float quantidadenumero,valordesejado,somanumeros,media,i;
	quantidadenumero=10;
	for (i=1;i <= quantidadenumero; i=i+1)
	{
	printf("Escreva o valor desejado: ");
	scanf ("%f", &valordesejado);
	somanumeros=somanumeros+valordesejado;
	}
	media=somanumeros/10;
	printf("A media possui o valor de:%.2f\n", media);
	system("pause");
}