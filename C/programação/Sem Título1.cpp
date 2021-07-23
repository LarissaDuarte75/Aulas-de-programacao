#include <stdlib.h>
#include <stdio.h>
 
int main(){
    int COD;
    char PRODUTO[128];
    float VAL,LUC,TOT;
    
    printf("Digite 0(Zero) para sair ou outro numero para continuar\n");
    scanf("%d", &COD);
    
    while(COD != 0){
         printf("Digite o produto: ");
         scanf("%s", &PRODUTO);
         printf("Digite o valor: ");
         scanf("%f", &VAL);
         
         
         if(VAL < 10){
                  
              LUC = 70 * VAL / 100;
              TOT = VAL + LUC;
              
              printf("Lucro de 70%% = %.2f \n\n", LUC); 
              printf("Valor do produto %s = %.2f \n\n", PRODUTO, TOT);
         }
         else if(VAL >= 10 && VAL < 20){
              
              LUC = 60 * VAL / 100;
              TOT = VAL + LUC;
              
              printf("Lucro de 60%% = %.2f \n\n", LUC);
              printf("Valor do produto %s = %.2f \n\n", PRODUTO, TOT); 
         }
         else if(VAL >= 20 && VAL <= 40){
              
              LUC = 50 * VAL / 100;
              TOT = VAL + LUC;
              
              printf("Lucro de 50%% = %.2f \n\n", LUC);
              printf("Valor do produto %s = %.2f \n\n", PRODUTO, TOT);
         }
         else {
              LUC = 30 * VAL / 100;
              TOT = VAL + LUC;
              
              printf("Lucro de 30%% = %.2f \n\n", LUC);
              printf("Valor do produto %s = %.2f \n\n", PRODUTO, TOT); 
                  
         }
         
         system("pause");
         system("cls");
         
         printf("Digite 0(Zero) para sair ou outro numero para continuar\n");
         scanf("%d", &COD);
    }
}





