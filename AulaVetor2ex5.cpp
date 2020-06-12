#include<stdio.h>

int main()
{
	int v1[10], v2[10], cont, cont2=9;
	
	for(cont=0;cont<10;cont++)
	{
		printf("informe o valor da posicao %d do vetor: ",cont);
		scanf("%d",&v1[cont]);
		v2[cont2] = v1[cont];
		cont2--; //cont2-1
	}
	for(cont=0;cont<10;cont++)
	{
		printf("\n V2 na posicao %d e %d",cont,v2[cont]);
	}
}
