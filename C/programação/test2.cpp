#include<stdio.h>
#include<stdlib.h>

int soma (int S){
	int Y = 0;
	if (S > 0){
		printf("S:%d\n", S);
		Y = S + soma(S+2); 
			system("pause");
		
	}
	
	return (Y);
	
}

main(){
	int NUM;
	system("cls");
	printf("< < Soma > >\n");
	printf("Primeiro numero= ");
	scanf("%d", &NUM);
	system("pause");
	while(NUM>=0){
	    printf("Somatorio %d = %d \n\n", NUM,soma(NUM));
		 system("pause");
		 system("cls");
		 printf("< < Soma > >\n");
		 printf("Segundo numero= ");
		 scanf("%d", &NUM);
		 
	}

		system("pause");
}

