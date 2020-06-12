#include <stdio.h>

/*int main()
{
	int num[10],cont=0;
	
	for(cont=0;cont<10;cont++)
	{
	printf("Informe um numero: ");
	scanf("%d",&num[cont]);//leitura do vetor
	num[cont] = num[cont] * 10;//multiplica o vetor por 10
	}
	printf("\n\n\nO vetor resultante e: \n");
	for(cont=0;cont<10;cont++)//imprime o resultado
	{
	printf("%d - ",num[cont]);
	
	}
}*/

// UTILIZANDO 2 FOR'S PARA SEPARAR OS DADOS.

/*MEDIA MAIOR E MENOR
int main()
{
	int num[10], cont=0, maior=0, menor=9999;
	float media=0;
	for(cont=0;cont<4;cont++)
	{
		printf("Informe um numero: ");
		scanf("%d",&num[cont]); //leitura do vetor
		media = media + num[cont];
		if(num[cont]>maior)
		{
			maior = num[cont];
		}
			if(num[cont]<menor)
		{
			menor = num[cont];
		}
	}
	media = media / 10;
	printf("A media e %.2f",media);
	printf("\nO maior e %d",maior);
	printf("\nO menor e %d",menor);
}*/

int main()
{
	int num[20], cont=0, somapar=0, somaimpar=0, multi5[20], cont5=0 ,multi=0;
	float media=0;
	for(cont=0;cont<20;cont++)
	{
		printf("Informe um numero: ");
		scanf("%d",&num[cont]);
		if (num[cont]%2==0)//Se numeros[cont] dividido por 2 tem resto == 0
		{
			somapar = somapar + num[cont];
		}
		else
		{
			somaimpar = somaimpar + num[cont];
		}
		if(num[cont]%5==0)
		{
			multi5[cont5]=num[cont];
			//printf("multiplo de 5 %d", multi5[cont5]);
			cont5++;
		}
	}
	for(multi=0;multi<cont5;multi++)
	{
		printf("multiplo de 5 %d\n", multi5[multi]);		
	}
	printf("A soma dos pares e %d\n",somapar);
	printf("A soma dos impares e %d\n",somaimpar);
	}
