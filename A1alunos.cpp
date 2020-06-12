#include <stdio.h>

int main()
{
	int mat, n1=0, sexo, cont=0, numMeninas=0, numMeninos=0; 
	float nota;
	
	printf("******Se nao tiver mais alunos a ser inserido, digite 0 na sua matricula.******\n");
	
	for(cont=1; cont <60; cont++)
	{
		printf ("\nInforme a matricula do aluno: ");
		scanf("%d",&mat);
		
		if(mat==0)
		{
			break;
		}
		
		printf ("Informe a nota do aluno: ");
		scanf("%f",&nota);
		
		printf ("Informe o sexo do aluno(1-Masculino 2-Feminino): ");
		scanf("%d",&sexo);
		
		if (sexo == 1)
		{
			numMeninos++;
		}
		if (sexo == 2)
		{ 
			numMeninas++;
		}
		if (nota>=9)
		{
			n1++;
		}
	}
	
	printf("\nO total de alunos e %d e de alunas e %d", numMeninos, numMeninas);
	printf("\nO total de alunos com nota acima de 9 e: %d", n1);
}
