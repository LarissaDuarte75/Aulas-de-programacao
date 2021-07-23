#include<stdio.h>
#include<stdlib.h>


int main(){
int COD[10], QTD[10], I=0, J; 
float VAL[10]; 


printf("\n\nCadastro de Material\n\n");
printf("\ndigite o codigo: \n");
scanf("%d", &COD[I]);

while (COD[I] != 0 && I < 5){

printf("\ndigite a quantidade:\n");
scanf("%d", &QTD[I]);
printf("digite O valor:\n");
scanf("%f", &VAL[I]);
I++;

if (I < 5){
	
system("cls");

printf("\nCadastro de Material\n");
printf("\ndigite o codigo\n");
scanf("%d", &COD[I]);

}
}
system("cls");
printf("\n\n Listagem de Materiais \n\n");
for (J=0; J < I; J++){

printf("\nCodigo:      %d\n", COD[J]);
printf("Quantidade:  %d\n", QTD[J]);
printf("Valor: R$    %.2f\n", VAL[J]);

}
printf("digite 0 para sair ou 1 para adicionar novos valores");
system ("pause");
}
