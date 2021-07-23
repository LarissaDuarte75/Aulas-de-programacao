#include<stdio.h>
#include<stdlib.h>
main(){
       int COD[5], QTD[5], I, J;
	   float VAL[5];	
	
	 for (I=0; I<5; I++){
	 	system("cls");
	 	
	 
	printf("\n\nCADASTRO DE MATERIAL\n\n");
	printf("Codigo: ");  scanf("%d", &COD[I]);
	printf("Quantidade: "); scanf("%d", &QTD[I]);
	printf("Valor: R$ "); scanf("%f", &VAL[I]);
}
    
	system("cls");
	printf("\n\nLISTAGEM DE MATERIAL\n\n");

	for (J=0; J<I; J++) {
	
	printf("Codigo: %d\n", COD[J]);
	printf("Quantidade: %d\n", QTD[J]);
	printf("Valor: R$  %.2f\n\n", VAL[J]);
	
	}	
		system("pause");
}
