#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int lin, col;
	char velha[3][3] = {{' ',' ',' '},
						{' ',' ',' '},
						{' ',' ',' '},};
	
	for(lin=0;lin<3;lin++)
	{
		for(col=0;col<3;col++)
		{
			printf("\nInforme o 'X'ou 'O' na posicao %d,%d: ", lin,col);
			scanf(" %c",&velha[lin][col]); //espaço a frente de %c
		}
	}
	for(lin=0;lin<3;lin++)
	{
		for(col=0;col<3;col++)
		{
			printf("%c ",velha[lin][col]);
		}
		printf("\n");
	}
	return 0;
}


//ATIVIDADE 4 E 5
//int main()
//{
//	int matriz[3][3];
//	char i, j;
//	
//	for (i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			printf("Informe um numero da posicao %d,%d da matriz: ",i,j);
//			scanf("%d",&matriz[i][j]);
//			
//			if(matriz[i][j]%2==0)//Exercicio 5
//			{
//				matriz[i][j] = matriz[i][j] / 2;
//			}
////			matriz[i][j]= matriz[i][j] * 10; //Exercicio 4
//		}
//	}
//	printf("\nA matriz resultante:\n");
//	
//	for (i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			printf(" %d",matriz[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int matriz[3][3][3];
//	char i, j, k;
//	
//	for (i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			for(k=0;k<3;k++)
//			{
//				printf("Informe um numero da posicao %d,%d,%d da matriz: ",i,j,k);
//					scanf("%d",&matriz[i][j][k]);
//			
//					if(matriz[i][j][k]%2!=0)
//					{
//						matriz[i][j][k] = matriz[i][j][k] * 5;
//					}
//			}
//		}
//	}
//	printf("\nA matriz resultante:\n");
//	
//	for (i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			for(k=0;k<3;k++)
//			{
//			printf(" %d",matriz[i][j][k]);
//			}
//			printf("\n");
//		}
//		printf("\n\n");
//	}
//}
