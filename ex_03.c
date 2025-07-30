#include <stdio.h>
#include <stdlib.h>

main()
{
	float salarioantigo,salarioatual;
	printf("Escreva seu salario anterior: ");
	scanf ("%f", &salarioantigo);
	if (salarioantigo <= 500){
		salarioatual = salarioantigo * 1.2;
		printf("O salario atual possui o valor de:%.2f\n", salarioatual);
	}
	else 
		{
		salarioatual = salarioantigo * 1.1;
		printf("O salario atual possui o valor de:%.2f\n", salarioatual);
		}
	system("pause");
}