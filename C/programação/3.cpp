#include <stdlib.h>
#include <stdio.h>

int main(){
    int COD[100], QUANTI[100], I=0, L,VAL[100];

    printf("\n\nProdutos de estoque\n\n");
    
    printf("Digite o Codigo ou 0(zero) para sair\n");
    printf("Digite: ");
    scanf("%d", &COD[I]); // 0
    
    while(COD[I] != 0 && I < 100){
          printf("Quantidade deste produto: ");
          scanf("%d", &QUANTI[I]);
          printf("Valor do produto: ");
          scanf("%d", &VAL[I]);

          I++; 
          
          system("pause");
          system("cls");
          
          printf("\n\nProdutos de estoque\n\n");
          printf("Digite o Codigo ou 0(zero) para sair\n");
          printf("Digite: ");
          scanf("%d", &COD[I]);
    }
    
    system("pause");
    system("cls");
    
    for(L=0; L < I; L++){
         printf("\ncodigo: %d, quantidade: %d, valor: %d\n", COD[L], QUANTI[L], VAL[L]);
    }
    
    printf("\n\n");
    system("pause");
}








