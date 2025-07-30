#include <stdio.h>
#include <stdlib.h>

main()
{
	int quantidadenumero,somanumeros,i;
	quantidadenumero=100;
	somanumeros=0;
	for (i=1;i <= quantidadenumero; i=i+1)
	{
	somanumeros=somanumeros+i;
	}
	printf("A soma dos elementos de 1 a 100, possui o valor de:%.d\n", somanumeros);
	system("pause");
}