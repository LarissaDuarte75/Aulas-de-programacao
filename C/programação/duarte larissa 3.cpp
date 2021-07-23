#include<stdio.h>
#include<stdlib.h>

int COD[500], QTDATUAL[500], PTCRITICO[500], DEFA, I, L, OPCOES, CONSULT,BUSCAR, NOVOCOD, NOVAQTD,NOVOPTCRITICO,NOVODEFA, VEND, MENOS;
float VALUNIT[500],NOVOVALUNIT;


void incluir (){

      printf("< < Incluir Produtos > > \n");
	   printf("Codigo do Produto: ");
	   scanf("%d", &COD[I]);
	  
	  while(COD[I] != 0 && I < 500){
	  	
	  	printf("Quantidade do produto: ");
	  	scanf("%d", &QTDATUAL[I]);
	  	printf("Ponto critico do produto: ");
	  	scanf("%d", &PTCRITICO[I]);
	  	printf("Valor Unitario: ");
	  	scanf("%f", & VALUNIT[I]);
	  	system("cls");
	  	
	  	I++;
	  	
	  	printf("< < Incluir produtos > > \n");
	    printf("Codigo do produto: ");
	    scanf("%d", &COD[I]);
	    
	  	
	  }
	 	

}


void alterar (){
	int ALTERAR;
   
   if(BUSCAR == COD[L]){
	
    
   printf(" < < Alterar produto > >\n");
   
   printf("\nPrecisa altera 1 - sim 2 - nao\n:");
   scanf("%d", &ALTERAR);
 
    if(ALTERAR == 1){
	 
	 
		 printf("\nCodigo encontrado\n %d ",  ALTERAR);
		
			printf("\nNovo codigo do produto: ");
			scanf("%d", &NOVOCOD);
			COD[L] = NOVOCOD;
			
			
			printf("\nNova quantidade do produto: ");
			scanf("%d", &NOVAQTD);
			QTDATUAL[L] = NOVAQTD;
			
			printf("\nNovo ponto critico do produto: ");
			scanf("%d", &NOVOPTCRITICO);
			PTCRITICO[L] = NOVOPTCRITICO;
			
			printf("\nNova defasagem: ");
			scanf("%d", &NOVODEFA);
			DEFA = NOVODEFA;
			
			printf("\nNovo valor unitario: ");
			scanf("%f", &NOVOVALUNIT);
			VALUNIT[L] = NOVOVALUNIT;
				
				
				
	system("pause");
	system("cls");			
					
	}
		if (COD[L] != BUSCAR){
	
	printf("\nCodigo nao encontrado");
	
	system("pause");
	system("cls");
}

	
}

}
       	
void listagem (){

         printf(" < < Listagem de Produtos > >\n");
         
         for (L = 0; L < I; L++){
         	
         	printf("Codigo do produto: %d\n", COD[L]);
         	printf("Quantidade do produto: %d\n", QTDATUAL[L]);
         	printf("Ponto critico do produto: %d\n ",PTCRITICO[L] );
	         printf("Valor Unitario do Produto: %.2f \n\n", VALUNIT[L]);
        
 }	
}



void consultar (){

    printf(" < < Consulta de Produtos > >\n");


printf("Codigo do produto: ");
scanf("%d", &CONSULT);

for(L=0; L < I; L++){
	
	if (CONSULT == COD[L]){
		
		printf("Quantidade do produto: %d\n", QTDATUAL[L]);
		printf("Produto em ponto critico: %d\n ",PTCRITICO[L] );
	   printf("Valor unitario do produto: %.2f\n\n", VALUNIT[L]);
	   printf("Defasagem:%.2f\n\n",DEFA);
      DEFA = QTDATUAL- PTCRITICO; 
		system("pause");
		break;
	}
}

if (COD[L] != CONSULT){
	
	printf("\nCodigo nao encontrado\n");
	
	
}
system("pause");
system("cls");

}




void vendas (){

    printf(" < < Venda de Produtos > >\n");


printf("Codigo do produto: ");
scanf("%d", &COD);

for(L=0; L < I; L++){
	
	if (VEND == QTDATUAL-PTCRITICO){
		
		printf("Quantidade desejada do produto: \n");
		scanf("%d", &QTDATUAL[L]);
		
		printf("Venda feita com sucesso!");
	   scanf("%d", &VEND);
	}
	else {
		
	printf("Quantidade insuficiente\n");
}


system("pause");
system("cls");

}	  


}
	

int main (){

while (OPCOES != 6){
	
	  printf("\n < < MENU > > \n");
	  printf("\n1 - Incluir Produtos");
	  printf("\n2 - Alterar Produtos");
	  printf("\n3 - Listar Produtos");
	  printf("\n4 - Consultar Produtos");
	  printf("\n5 - Vendas");
	  printf("\n6 - Sair");
	  
	  printf("\nEscolha o que quer fazer\n");
	  scanf("%d", &OPCOES);
	  system("cls");
	  
	  
	if (OPCOES == 1 && I < 500){
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
				
		
	else if (OPCOES == 5){
		 vendas ();
		 system("cls");
			
			
		}		
				
				
}
}


