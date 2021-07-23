#include<stdio.h>
#include<stdlib.h>
main(){
	FILE *pont_arq; // variável (ponteiro) do tipo arquivo
	 
	 char palavra [20];
	 
	pont_arq=fopen("arquivo.txt","w");// w(write) - arquivo permite escrita
	
	if(pont_arq==NULL){
		printf("Errro na criacao do aqrquivo!!!\n\n");
		system("pause");
		exit;
		
		
	}
	
	
	printf("Ecreva algo: ");
	gets(palavra);
	
	fprintf(pont_arq, "%s", palavra);
	
	fclose(pont_arq);
	printf("Dados gravados com sucesso !!!\n\n");
	system("pause");
}

