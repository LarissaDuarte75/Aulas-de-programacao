#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

	char NOME[100];
	int J, I, NOVO,OPCOES;
 

 int ADICIONAR(){
   system("cls");
   printf("\nNOME DO PRODUTO\n");
   scanf("%s",NOME);
   while(NOME[I]!=0 && I<100){

   printf("\nPRODUTO %s ADICIONADO\n", NOME);
   I++;
     
   printf("\nNOME DO PRODUTO\n");
   scanf("%s",NOME);
 }
 
 }
 
void LISTAR(){
    system("cls");
   
	    printf("\nLISTAGEM DE PRODUTOS\n");
	     for (J = 0; J < I; J++){
    printf("\nNOME DO PRODUTO %s\n", NOME);
    system("pause");
 }
}


int EDITAR(){
    int ALTERAR;
    
    if (ALTERAR == NOME[J]){
        printf("\nPRECISA ALTERAR? 1- sim  2- nao \n");
        scanf("%d", &ALTERAR);

        if (ALTERAR == 1){
            printf("\nDIGITE O NOME DO PRODUTO\n");
            scanf("%d", &NOVO);
            NOME[J]= NOVO;
            system("pause");
        }
    }

}
int main(){

  while (OPCOES != 4){

    printf("\n\nMENU\n\n");
    printf("\n1- ADICIONAR PRODUTO\n");
    printf("\n2- LISTAR PRODUTOS\n");
    printf("\n3- EDITAR PRODUTOS\n");
    printf("\n4- SAIR\n");

    scanf("%d",&OPCOES);

    if (OPCOES == 1 && I < 100){
		     ADICIONAR ();
		     system("cls");
			}
		else if (OPCOES == 2){
			LISTAR();
			system("cls");
			
		    }
		else if (OPCOES == 3){
		   EDITAR();
			system("pause");
			system("cls");
			
			
			}
					
	}
}




