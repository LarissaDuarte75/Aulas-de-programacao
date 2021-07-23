#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main(){
	FILE *pont_arq; // variável (ponteiro) do tipo arquivo
	 
	 char texto[100];
	 
	 pont_arq=fopen("texto/arquivo.txt","r");
	 
	 while(fgets(texto,100,pont_arq) != NULL){
	 	printf("%s", texto);
	 	getch();
	 }
	 
	 fclose(pont_arq);
	 system("pause");
	 }
