//LARISSA DE OLIVEIRA DUARTE - 20102240
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

char nome1[50], nome2[50];
int OPCOES,I;


void incluir (){
	
	printf("\n\n Nomes em ordem alfab\x82tica\n\n");
	
	printf("Digite o primeiro nome :\n");
	gets(nome1);
	scanf("%s",&nome1);
	

	
	printf("Digite o segundo nome :\n");
	gets(nome2);
	scanf("%s",&nome2);
}
void listar (){
	
	printf("Nomes em ordem alfab\x82tica: ");
	
	if (strcmp (nome1, nome2) < 0)
	{
		printf("\n%s\n\n%s\n\n", nome1, nome2);
	}
	else
	{
		printf("\n%s\n\n%s\n\n", nome2, nome1);
	}
	printf("Valor da comparacao: %d\n\n", strcmp(nome1, nome2));
	
	
}
int main(){
	     
		  while(OPCOES != 3){
	
		  
		  printf("\n\n < < MENU > > \n\n");
		  printf("\nDigite o que quer fazer\n");
		  printf("\n\n1 - Incluir Nomes\n\n");
		  printf("\n\n2 - Ordem alfab\x82tica \n\n");
		  printf("\n\n3 - Sair - \n\n");
		  printf("\n\nEscolha Uma Opcao\n\n");
		  scanf("%d", &OPCOES);
		  system("cls");
		  
		  
		  if (OPCOES == 1 && I < 50){
		     incluir ();
		     system("cls");
			}
		else if (OPCOES == 2){
			listar();
			system("pause");
			system("cls");
			
			
	  		}
	
	   }
}
