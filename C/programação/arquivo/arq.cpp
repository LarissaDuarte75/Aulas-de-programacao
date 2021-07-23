#include<stdio.h>
#include<stdlib.h>

main(){
	FILE *pont_arq;
	
	char palavra[20];
	
	pont_arq=fopen("arquivo.txt","w");
	printf("Escreva: ");
	gets(palavra);
	
	fprintf(pont_arq,"%s",palavra);
	
	fclose(pont_arq);
	printf("arquivo criado!");
	system("pause");
}
