#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 float DESVIO,VARIANCIA,NUM1,NUM2,NUM3, MEDIA;
 int I;
void media(){
	
        printf("Digite o primeiro numero: ");
        scanf("%f", &NUM1);
        printf("Digite o segundo numero: ");
        scanf("%f", &NUM2);
        printf("Digite o terceiro numero: ");
        scanf("%f", &NUM3);
    
    
    MEDIA = (NUM1+NUM2+NUM3)/3;
	 VARIANCIA = pow(NUM1-MEDIA,2) + pow(NUM2-MEDIA,2)+ pow(NUM3-MEDIA,2) /3; 
	 DESVIO= sqrt( VARIANCIA ); 
	    
    printf("A media e %f\n", MEDIA);
    printf("A variancia e %f\n\n", VARIANCIA);
    printf("O desvio padrao e  %f\n\n", DESVIO);
    
    system("pause");
}
 
int main(){
    int ACAO=0;
    while(ACAO != 2){
        system("cls");
        
        
        printf("\n\n=============================\n\n");
        
        printf("=============================\n");
        printf("============ MENU ===========\n");
        printf("=============================\n\n");
        
        printf("1 -> Media dos valores\n");
        printf("2 -> Sair\n\n");
        
        printf("Digite: ");
        scanf("%d", &ACAO);
        
        system("cls");
        
        if (ACAO == 1 && I < 50){
		     media();
		     system("cls");
        }
        system("pause");
    }
    
}
