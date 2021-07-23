//LARISSA DE OLIVEIRA DUARTE - 20102240
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float num1,num2,num3,num4,num5,vari,med,desvi;
int I,OPCOES;

void media(){
	  variancia ();
	  desvio();
	
	  printf("\nCalculo da Media\n");
     
	  printf("\nDigite primeiro numero : \n");
	  scanf("%f",&num1);
	  
	  printf("\nDigite segundo numero  : \n");
	  scanf("%f",&num2);
	  
	  printf("\nDigite terceiro numero : \n");
	  scanf("%f",&num3);
	  
	  printf("\nDigite quarto numero   : \n");
	  scanf("%f",&num4);
	  
	  printf("\nDigite quinto numero   : \n");
	  scanf("%f",&num5);
	  
		
	  	    med = (num1 + num2 + num3 + num4 +num5)/5;
	  	  
	   
	    printf("Calculo da Media e: %f",med);
	    printf("Calculo da variancia e: %f",vari);
	    printf("Calculo da desvio padrao e: %f",desvi);
	    system("pause");
	  	
}
void variancia () {
	
	
	  vari = pow(num1 - med,2) + pow(num2 - med,2) + pow(num3 - med,2) + pow(num4 - med,2) + pow(num5 - med,2)/5;   
	
}
void desvio () {
	
	  
	  desvi = sqrt(vari);	
	
}

int main(){
	
	 while(OPCOES != 4){
	
		  
		  printf("\n\n < < MENU > > \n\n");
		  printf("\nDigite o que quer fazer\n");
		  printf("\n\n1 - Calcular \n\n");
		  printf("\n\n4 - Sair - \n\n");
		  printf("\n\nEscolha Uma Opcao\n\n");
		  scanf("%d", &OPCOES);
		  system("cls");
		  
		  
		  if (OPCOES == 1 && I < 50){
		     media();
		     system("cls");
			}

		}
	}
	
	


