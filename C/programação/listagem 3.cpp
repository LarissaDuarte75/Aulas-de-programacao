#include <stdio.h>
#include <stdlib.h>

int COD[5], QTD [5], I=0;
float VAL[5];

void listar(){
	
	printf("\nListagem de Material\n");
	
	for (I=0; I < 5; I++){
		
		
		printf("Codigo:  %d  \n", COD[I]);
		printf("Quantidade:  %d  \n", QTD[I]);
		printf("Valor: R$  %.2f  \n", VAL[I]);
	}
}
void cadastrar(){
	
	for (I=0; I < 5; I++){
		
		printf("\nListagem de Material\n");
		
		printf("digite o codigo: \n");
		scanf("%d", &COD[I]);
		printf("digite a quantidade:  \n");
		scanf("%d", &QTD[I]);
		printf("Valor: R$  %.2f  \n");
		scanf("%f", &VAL[I]);
		
		system ("cls");
	}
}
int main(){
	cadastrar();
    
    listar();
    
    system("pause");
}
