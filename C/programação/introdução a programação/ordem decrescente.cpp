#include<stdio.h>
#include<stdlib.h>

main(){
	float NUM1, NUM2, NUM3;
	
	printf("NUMEROS EM ORDEM DECRESCENTE\n\n");
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &NUM1);
	
	printf("Digite o segundo numero: ");
	scanf("%f", &NUM2);
	
	printf("Digite o terceiro numero: ");
	scanf("%f",&NUM3);
	
	if(NUM1 > NUM2 && NUM1 > NUM3){
		if(NUM2 > NUM3){
			printf("%.2f - %.2f - %.2f", NUM1, NUM2, NUM3);
		}
		else{
			printf("%.2f - %.2f - %.2f", NUM1, NUM3, NUM2);
		}
	}
		else{
			if(NUM2 > NUM3){
			  if(NUM1 > NUM3){
				
			printf("%.2f - %.2f - %.2f", NUM2, NUM1, NUM3);
		}
		else{
			printf("%.2f - %.2f - %.2f", NUM2, NUM3, NUM1);
		}
  }
		else{
			if(NUM1 > NUM2){
			printf("%.2f - %.2f - %.2f", NUM3, NUM1, NUM3);
			}
		else{
			printf("%.2f - %.2f - %.2f", NUM3, NUM2, NUM1);
		   }
      }
		
	}
	system("pause");
}
		
