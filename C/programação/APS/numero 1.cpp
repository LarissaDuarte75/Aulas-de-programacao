#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
main(){
	char nome1[50], nome2[50];
	
	
	printf("\n\n Nomes em ordem alfab\x82tica\n\n");
	
	printf("Digite o primeiro nome :\n");
	gets(nome1);
	
	printf("Digite o segundo nome :\n");
	gets(nome2);
	
	printf("Nomes em ordem alfab\x82tica: ");
	
	if (strcmp (nome1, nome2) < 0)
	{
		printf("\n%s\n\n%s\n\n", nome1, nome2);
	}
	else
	{
		printf("\n%s\n\n%s\n\n", nome2, nome1);
	}
	printf("Valor da comparacao: %d", strcmp(nome1, nome2));
	
	
	
}
