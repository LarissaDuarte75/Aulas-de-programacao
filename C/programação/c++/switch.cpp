#include<stdio.h>
#include<stdlib.h>

int main(){
	int num1, num2, resultado;
   char op;
	
	printf("Digite o primeiro numero: ");
	scanf("%d",&num1);
	
	printf("Digite segundo numero: ");
	scanf("%d",&num2);
	
	printf("Digite a operacao: ");
	scanf("%s",&op);
	
switch(op)
{
	case '+':
		resultado = num1 + num2;
		printf("soma: ",resultado);
		break;
		
	case  '-':
		resultado = num1 - num2;
		printf("subtracao: ",resultado);
		break;
		
	case '*':
		resultado = num1 * num2;
		printf("multipilcacao: ",resultado);
		break;
	
	case '/' :
		resultado = num1 / num2;
		printf("divisao: ",resultado);
		break;
		
	default :
		printf("Operacao inexistente");
		break;
	
}	
	
}
