//STRING
#include<stdio.h>
#include <string.h> // Para trabalhar com string, sempre usar esta biblioteca

/*int main()
{
	char cidade[30];
	int idade;
	
	
	printf("Informe a sua cidade: ");
	getchar();//utilizar para não dar erro no programa
	gets(cidade);//para ler a string
	//scanf("%s",cidade);
	printf("Informe a sua idade: ");
	scanf("%d",&idade);
	printf("A cidade informada e %s\n", cidade);
	printf("A idade informada e %d\n", idade);
}*/
//COMO USAR STRLEN
/*
int main(int argc, char *arg[])
{
	char cidade[30];
	int cont, tamanho;
	
	printf("informe a cidade de nascimento: ");
	gets(cidade);
	//strlen -> retorna o tamanho de uma string
	tamanho = strlen(cidade);
	for(cont=0;cont)
}*/

/*
//COMO USAR STRCPY (para fazer a atribuição de TODA a string (varios caracteres)
int main()
{
	char cidade [30];
	
	printf("Informe a cidade: ");
	gets(cidade);
	
	//cidade = "Canoas"; //Quando string, gera erro no codigo
	strcpy(cidade,"Canoas"); //Para poder substituir o valor informado em cidade, ou atribuir um valor
//deve ser utilizado este comando.
	printf("A cidade e: %s",cidade);
	
}*/

// COMO USAR STRCAT
/*
int main()
{
	char tratamento[30], nome[30];
	
	printf("Informe a tratamento: ");
	gets(tratamento);
	printf("Informe a nome: ");
	gets(nome);
	
	strcat(tratamento,nome);
	printf("\nBoa noite: %s",tratamento);
	//printf("\nA segunda palavra e: %s",palavra2);
}*/

//COMO USAR STRCMP
/*
int main()
{
	char palavra1[30], palavra2[30];
	
	printf("Informe a palavra 1: ");
	gets(palavra1);
	printf("Informe a palavra 2: ");
	gets(palavra2);
	
	if (strcmp(palavra1,palavra2)==0)
	{
		printf("\nAs palavras sao iguais: palavra 1 %s e palavra 2 %s",palavra1,palavra2);
	}
	else
	{
		printf("\nAs palavras sao diferentes: palavra 1 %s e palavra 2 %s",palavra1,palavra2);
	}
	
}*/
