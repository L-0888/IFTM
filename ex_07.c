#include <stdio.h>
#include <stdlib.h>

main()
{
	float valorgasolina,pagamento,lgasolina;
	printf("Escreva o preco do litro: ");
	scanf ("%f", &valorgasolina);
	printf("Escreva o valor do pagamento: ");
	scanf ("%f", &pagamento);
	if (pagamento !=0)
	{
	 lgasolina = pagamento / valorgasolina;
	 printf("O valor,em litros de gasolina, foi de:%.2f\n", lgasolina); 
	}
	else
		{
		printf("Nao existe divisao por zero.\n"); 
		}
	system("pause");
}
	