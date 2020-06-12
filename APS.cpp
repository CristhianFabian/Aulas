#include <stdio.h>
// APS Cristhian Fabian Rosa de Almeida
int main()
{
	int menu,cont;
		
	for (cont=0;cont<10;cont++)
	{
		printf("----------------------------\n       MENU PRINCIPAL\n\n");
		printf("1- Incluir\n2- Consultar\n3- Alterar\n4- Excluir\n5- Sair\n\n");
		printf("Informe a Opcao desejada: ");
		scanf("%d", &menu);
	
		if (menu == 1)
		{
			printf("\nInclusao carregada\n\n");
		}
		if (menu == 2)
		{
			printf("\nConsulta carregada\n\n");
		}	
		if (menu == 3)
		{
			printf("\nAlteracao carregada\n\n");
		}
		if (menu == 4)
		{
			printf("\nExclusao carregada\n\n");
		}
		if (menu == 5)
		{
			printf("\nSaida carregada");
			break;
		}
		if (menu>5)
		{
			printf("\nOpcao invalida, informe a opcao correta\n\n");
		}
	}	
	
}

