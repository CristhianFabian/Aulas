#include <stdio.h>

int main()
{
	int num, cont=0, multiplicador=0;
	
	printf("informe um numero de 1 a 9: ");
	scanf("%d",&num);
	
	while (cont <= 100)
	{
		printf("%d\n", cont);
		cont++;
		
		if (cont == num + multiplicador)
		{
			printf("x\n"); 
			multiplicador = num + multiplicador;
			cont++;
		}
	
	}
}
