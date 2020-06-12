#include<stdio.h>

int main()
{
	int cont, TD=0, ACDC=0, matTD[2000], matACDC[2000];
	
	for(cont=0;cont<2000;cont++)
	{
		printf("Asssinantes que escutaram The Doors.");
		printf("\nInforme o codigo do assinante: ");
		scanf("%d",&matTD[cont]);
		if(matTD[cont]==0)
		{
			break;
		}
		TD++;
	}
	
	for(cont=0;cont<2000;cont++)
	{
		printf("Asssinantes que escutaram ACDC.");
		printf("\nInforme o codigo do assinante: ");
		scanf("%d",&matACDC[cont]);
		if(matACDC[cont]==0)
		{
			break;
		}
		ACDC++;
	}
	
	printf("\nO total de assinantes que escutaram The Doors e de %d ",TD);
	
	cont = 0;
	for (matTD[cont]!= matACDC[cont])
	{
		printf("Os assinantes que escutaram a bandas The Doors e NAO escutaram ACDC sao: %d",matTD[cont]);
	
	}
}	
