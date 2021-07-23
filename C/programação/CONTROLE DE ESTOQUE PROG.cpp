#include<stdio.h>
#include<stdlib.h>

int COD[100], QTD[100], PTCRITICO, DEFA, I, L, OPCOES, CONSULT, NOVOCOD, NOVAQTD,NOVOVALUNIT,NOVOPTCRITICO,NOVODEFA, ALTERAR, VEND;
float VALUNIT[100];

void incluir (){
	
            printf("< < Incluir Produtos > > \n\n");
		    printf("Codigo do Produto: ");
		    scanf("%d", &COD[I]);
		  
		  while(COD[I] != 0 && I < 100){
		  	
		  	printf("Quantidade do Produto: ");
		  	scanf("%d", &QTD[I]);
		  	printf("Produto em Ponto critico: ");
		  	scanf("%d", &PTCRITICO);
		  	printf("Produto Defasado");
		  	scanf("%d", &DEFA);
		  	printf("Valor Unitario: ");
		  	scanf("%f", & VALUNIT[I]);
		  	system ("cls");
		  	
		  	I++;
		  	
		  	printf("< < Incluir Produtos > > \n\n");
		    printf("Codigo do Produto: ");
		    scanf("%d", &COD[I]);
		    
		  	
		  }
		 	
	
}
void alterar (){
	int ALTERAR;
	 
	
	if (ALTERAR == COD[L]){
		
		printf("Precisa alterar 1 - sim  2 - nao:  \n");
		scanf("%d", &ALTERAR);
		
		
		if (ALTERAR == 1){
			
			printf("Novo Codigo do Produto: ");
			scanf("%d", &NOVOCOD);
			COD[L] = NOVOCOD;
			
			
			printf("Nova Quantidade do Produto: ");
			scanf("%d", &NOVAQTD);
			QTD[L] = NOVAQTD;
			
			printf("Novo Ponto Critico do Produto: ");
			scanf("%d", &NOVOPTCRITICO);
			PTCRITICO = NOVOPTCRITICO;
			
			printf("Nova Defasagem: ");
			scanf("%d", &NOVODEFA);
			DEFA = NOVODEFA;
			
			printf("Novo Valor Unitario: ");
			scanf("%f", &NOVOVALUNIT);
			VALUNIT[L] = NOVOVALUNIT;
					
					
					
					
					
		system("pause");			
						
		}
		
	}
         	
}

void listagem (){
	
	         printf(" < < Listagem de Produtos > > \n\n");
	         
	         for (L = 0; L < I; L++){
	         	
	         	printf("Codigo do Produto: %d\n", COD[L]);
	         	printf("Quantidade do Produto: %d\n", QTD[L]);
	         	printf("Produto em Ponto critico: %d\n ",PTCRITICO);
		        printf("Produto Defasado: %d\n",DEFA );
		        printf("Valor Unitario do Produto: %.2f \n\n", VALUNIT[L]);
	        
	 }	
}


void consultar (){
	
	printf("Codigo do Produto: ");
	scanf("%d", &CONSULT);
	
	for(L=0; L < I; L++){
		
		if (CONSULT == COD[L]){
			
			printf("Quantidade do Produto: %d\n", QTD[L]);
			printf("Valor Unitario do Produto: %.2f\n\n", VALUNIT[L]);
			
			
			break;
			
			
		}
			
	}
	
	if (COD[L] != CONSULT){
		
		printf("Codigo Nao Encontrado!");
		
		
}
	

   	
	
	
	
	system("pause");
	system("cls");
	
}

int main (){
	
	while (OPCOES != 6){
		
		  printf("\n\n < < MENU > > \n\n");
		  printf("\nDigite o que quer fazer\n");
		  printf("\n\n1 - Incluir Produtos\n\n");
		  printf("\n\n2 - Alterar Produtos\n\n");
		  printf("\n\n3 - Listar Produtos\n\n");
		  printf("\n\n4 - Consultar Produtos\n\n");
		  printf("\n\n5 - Vendas.\n\n");
		  printf("\n\n6 - Sair - \n\n");
		  
		  printf("\n\nEscolha Uma Opcao\n\n");
		  scanf("%d", &OPCOES);
		  system("cls");
		  
		  
		if (OPCOES == 1 && I < 100){
		     incluir ();
		     system("cls");
			}
		else if (OPCOES == 2){
			alterar();
			system("cls");
			
		    }
		else if (OPCOES == 3){
			listagem();
			system("pause");
			system("cls");
			
			
			}
		else if (OPCOES == 4){
			consultar();
			system("cls");
	    }
					
	}
}


