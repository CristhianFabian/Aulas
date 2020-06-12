#include <stdio.h>
#include <string.h>

int main()
{
	char frase[50], frase2[50];
	int cont, tamanho=0;
	
	printf("Informe a frase: ");
	gets(frase);
	
	tamanho = strlen(frase);
		
	/*for(cont=0;cont<tamanho;cont++);
	{
		if(frase[cont]=='a');
		{
			frase[cont]='o';
		}
		if(frase[cont]=='A');
		{
			frase[cont]='O';
		}
	}	
	printf("\nA nova frase e: %s.",frase)*/
	for(cont=0;cont<tamanho;cont++)
	{
		frase2[tamanho-1-cont] = frase[cont];
	}
	printf("A frase invertida e %s",frase2);
}
