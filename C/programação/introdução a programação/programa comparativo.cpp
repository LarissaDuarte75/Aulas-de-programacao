#include<stdio.h>
#include<stdlib.h>

int main(){
	float NUM1, NUM2;
	
	printf("Programa Comparativo\n");
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &NUM1);
	
	printf("Digite o segundo numero: ");
	scanf("%f", &NUM2);
	
	if (NUM1 > NUM2){
		printf("O maior: %2.f, Primeiro numero", NUM1);
			}
	else if (NUM1 == NUM2) {
		printf("Os numeros sao iguais");
	}
			
	else{
		printf("O maior: %2f, Segundo numero", NUM2);
	}
	system("pause");
}
