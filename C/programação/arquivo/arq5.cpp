#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main(){
	FILE *pont_arq;
	
	int qtd=2,i=0;

    char c;
    
    pont_arq=fopen("Texto/arquivo.txt","r");
    
	printf("Codigo: ");
	c=getc(pont_arq);
	
    do{
	
	//	printf("%c",c);
		
		if(c!=';'){
			printf("%c",c);
		}
		else{
			printf("\n");
			if(i!=0){
				printf("Codigo: ");	
				i--;
				qtd--;
			}
			else if(qtd==2){
				printf("Nome: ");
			}
			else if(qtd==3){
				printf("Endereço: ");
			}
			else if(qtd==4){
				printf("Bairro: ");
			}
			else if(qtd==5){
				printf("Estado: ");
				qtd=1;
				i++;
			}
			qtd++;
		}
		c=getc(pont_arq);
	}while(c!=EOF);
}
