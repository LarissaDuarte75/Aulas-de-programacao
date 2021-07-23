#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	float nota1, nota2,nota3,media;
	char op;
	
	printf("Digite a opcao A ou P: ");
	scanf("%c",&op);
	printf("Digite os numeros: ");
	scanf("%f %f %f",&nota1,&nota2,&nota3);
	if (op == 'A'){
		media = (nota1 + nota2 + nota3)/3;
		
	}
	else if (op =='P'){
		media = (nota1*5 + nota2*3 + nota3*2)/10;
		
	}
	printf("Media = %f",media);
}

