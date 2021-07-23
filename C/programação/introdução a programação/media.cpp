#include<stdio.h>
#include<stdlib.h>

int main(){
	float NOT1,NOT2,NOT3,MEDIA;
	
	printf(" MEDIA ARITMETICA\n\n");
	
	printf("Digite a primeira nota: ");
	scanf("%f", &NOT1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &NOT2);
	
	printf("Digite a terceira nota: ");
	scanf("%f", &NOT3);
	
	MEDIA = (NOT1 + NOT2 + NOT3) /3;
	
	if(MEDIA >= 7){
		printf("Media: %.2f, Aluno Aprovado", MEDIA);
	}
	else if (MEDIA < 7 && MEDIA >= 4){
		printf("Media: %.2f, Aluno em Prova Final", MEDIA);
	}
	else{
		printf("Aluno Reprovado");
	}
	system("pause");
}
