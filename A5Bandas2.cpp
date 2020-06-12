#include<stdio.h>

int main()
{
	int cont, cont2, encontrou, TD=0, ACDC=0, matTD[2000], matACDC[2000];
	
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
	

	for(cont=0;cont<2000;cont++)
	{

		if(matTD[cont] == 0){
		    break;
		}		
        //printf("\nthe doors: %d",matTD[cont]);	

		for(cont2=0;cont2<2000;cont2++)
		{
			
			if(matACDC[cont2] == 0){
				break;
			}
			
        	//printf("\nAC DC: %d",matACDC[cont2]);	
			
			if(matTD[cont] == matACDC[cont2]){
				encontrou = 1;
				break;
			}
/*
			if(matTD[cont] != matACDC[cont2]){
   			    printf("Os assinantes que escutaram a bandas The Doors e NAO escutaram ACDC sao: %d",matTD[cont]);	
			}
*/
		}
		if (encontrou != 1){
    	   printf("\nOs assinantes que escutaram a bandas The Doors e NAO escutaram ACDC sao: %d\n",matTD[cont]);	
		} 
		encontrou = 0;
	}
}	
