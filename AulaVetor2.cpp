#include<stdio.h>

int main()
{
	int primeiro[10], segundo[10], terceiro[10], cont;
	
	for(cont=0;cont<10;cont++)
	{
		printf("Informe o valor da posi��o %d do primeiro vetor: ",cont);
		scanf("%d",&primeiro[cont]);
		printf("Informe o valor da posi��o %d do segundo vetor: ",cont);
		scanf("%d",&segundo[cont]);
		terceiro[cont] = primeiro[cont] * segundo[cont];
		//printf("Igual a %d\n", terceiro[cont]);
	}
	printf("\nO vetor resultante (terceiro) e: \n");
	for(cont=0;cont<10;cont++)
	{
		printf("Posicao %d e igual a %d\n",cont,terceiro[cont]);
	}
	
	//cont � o indice, ou seja a posi��o
	// ja vetor[cont] � o valor do veror(conteudo) naquela poci��o.
	
}
