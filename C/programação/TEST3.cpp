#include<stdio.h>
#include<stdlib.h>


int QTD;

void termos(){
	int NUM1=1,NUM2=1,F,I,SOMA;
		
	printf("%d - %d - ",NUM1,NUM2);
	for(I=3;I<=QTD;I++){
		printf("%d - ",F);
		NUM1 = NUM2;
		NUM2 = F;
	}
}


int main(){
	
	printf("SEQUENCIA DE FIBONACCI\n\n");
	printf("Digite a quantidade de termos= ");
	scanf("%d",&QTD);
	while(QTD>1){
		termos();
		system("pause");
		system("cls");
		printf("SEQUENCIA DE FIBONACCI\n\n");
		printf("Digite a quantidade de termos= ");
		scanf("%d",&QTD);
		system("pause");
	}
}
 
