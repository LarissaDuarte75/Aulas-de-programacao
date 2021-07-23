#include<stdio.h>
#include<stdlib.h>

void mensagem(int n)
{
	printf("numero %d\n",n);
}
void mensagem(char c)
{
	printf("caractere %c\n",c);
}


int main(){
	
	mensagem(10);
	mensagem('A');
	
	
}
