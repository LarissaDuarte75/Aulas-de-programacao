#include<stdio.h>
#include<stdlib.h>

int main(){
	int L[6];
	int I;
	for (I=0; I < 6; I++){
		
		printf("digite um valor");
	scanf("%d", &L[I]);
	
	}
	for(I=0; I < 6; I++){
		
	printf("posicao %d: %d\n", I, L[I] );
	}

	printf("\n%d\n", L[2] );
	
	system ("pause");
	
	return 0;
	
}
