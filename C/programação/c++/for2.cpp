#include<stdio.h>
#include<stdlib.h>

int main(){
	int num, fat =1;
	
	printf("digite um numero: ");
	scanf("%d", &num);
	
	for(int i = 1;  i < num ; i++)
	{
		fat = fat * (i + 1);
	}
	
	printf("fatorial e %d",fat);

	
	
	
}
