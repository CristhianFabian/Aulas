#include <stdio.h>

int main()
{
	int cont;
	float nota[3], media=0;
	for(cont=0;cont<4;cont++)
	{
		printf("Informe a nota: ");
		scanf("%f",&nota[cont]);
		media=media+nota[cont];
	}
	
	media = media/4;
	printf("\nA media e %.2f",media);
}
