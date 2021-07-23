#include <stdio.h>
#include <stdlib.h>

int COD[10], QTD [10], I=0, J=0, ACAO;
float VAL[10];

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
		system("pause");
}
int main(){
	
	while (ACAO != 3) {
	system("cls");
	
	printf("\nMenu\n");
	
	printf("1 - Cadastrar\n");
	printf("2 - Listar\n");
	printf("3 - sair\n");
	
	printf("digite: ");
	scanf("%d", &ACAO);
	
	system("cls");
	
	if (ACAO == 1){
		cadastrar();
	}
	else if (ACAO == 2){
		listar();
		
		system("pause");
    }
}
}
