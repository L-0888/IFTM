#include <stdio.h>
#include <stdlib.h>

main()
{
	int numerocavalos,numeroferraduras;
	printf("Escreva o numero de cavalos: ");
	scanf ("%d", &numerocavalos);
	numeroferraduras = numerocavalos * 4;
	printf("O numero de ferraduras possui o seguinte valor:%.d\n", numeroferraduras);
	system("pause");
}