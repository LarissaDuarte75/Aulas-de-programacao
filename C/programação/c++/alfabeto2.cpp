#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	 char p1[30],p2[30];
	
	 printf("Informe o alfabeto: ");
	 gets(p1);
	 printf("Informe a palavra que deseja saber: ");
	 gets(p2);
	 
	 while(p1[30] != 0){
	
	 if (strcmp (p1,p2 == 0))
	 printf("\nPalavras sao iguais.");
	 
	 if(strcmp(p1,"alfabeto")==0)
	 printf("\nPalavra existente no alfabeto.");
	 
	 if(strcmp(p2,"alfabeto")==0)
	 printf("\nPalavra nao existente no alfabeto.");
	 
	 
	 return 0;
  }
}
