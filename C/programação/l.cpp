#include <stdlib.h> 
#include <stdio.h>

int main(){
 	int VAL[20], I=0, L, COD;


 	printf("\n\nVertor\n\n");
 	printf("Digite um numero ou 0(zero) para sair\n");
 	printf("Digite: ");
 	scanf("%d", &VAL[I]);


 	while(VAL[I] != 0 & I < 19){
 	system("cls");
 	I++;
 	printf("\n\nVetor\n\n");
 	printf("Digite um numero ou 0(zero) para sair\n");
 	printf("Digite: ");
 	scanf("%d", &VAL[I]);
 	}


 	if(VAL[I] == 0){
 	I--;
 	}

	system("cls");


 	printf("Digite \n 0(para sair)\n 1(para ordem de preenchimento)\n 2(para ordem inversa)\n");
 	scanf("%d", &COD);
 	system("cls");
 	while(COD == 1 || COD == 2){
 	if(COD == 1){
 	for(L=0; L <= I; L++){
 	printf("\n%d\n", VAL[L]);
 	}
 	}
 	else if(COD == 2){
 	for(L=I; L >= 0; L--){
 	printf("\n%d\n", VAL[L]);
 	}
 	}
 	system("pause");
 	system("cls");
 	printf("Digite \n 0(para sair)\n 1(para ordem de preenchimento)\n 2(para ordem inversa)\n");
 	scanf("%d", &COD);
 	system("cls");
 	}

system("pause");
}

 



