#include<stdio.h>
#include<stdlib.h>

bool par(int num)
{
	if(num % 2 == 0)
	  return true;
	return false;
}

int main(){
	int n;
	  printf("Digite um numero: ");
	  scanf("%d",&n);
	  if(par(n))
	  
	  printf("O numero %d eh par",n);
	  
	  else
	  printf("O numero %d eh impar",n);
	
	
}
