#include<stdio.h>
#include<stdlib.h>

int main(){
	int L,A,R;
	
	printf("MAIOR NUMERO\n");
	
	printf("Digite o primeiro numero: \n");
	scanf("%d", &L);
	
	printf("Digite o segundo numero: \n");
	scanf("%d", &A);
	
	printf("Digite o terceiro numero: \n");
	scanf("%d", &R);
	
	if(L >= A && L >= R){
		printf("O maior numero e: %d\n",L);
	}
	else if(A>=R){
		printf("O maior numero e: %d\n", A);
	}
	else{
		printf("O maior numero e: %d\n", R);
	}
	system("pause");
	
	
}
