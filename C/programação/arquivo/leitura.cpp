#include<stdio.h>
#include<stdlib.h>
main(){
	FILE *pont_arq; // variável (ponteiro) do tipo arquivo
	 
	 char c;
	 
	pont_arq=fopen("arquivo.txt","r");

  do{
  	
	  c=getc(pont_arq);
  
  	printf("%c", c);
  }while(c!=EOF);
  
  fclose(pont_arq);
  
  printf("\n\n");
  system("pause");
}
