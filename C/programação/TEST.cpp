#include<stdio.h>
#include<stdlib.h>

int COD[500], QTDATUAL[500], PTCRITICO[500], DEFA, I, L, OPCOES, CONSULT,BUSCAR, NOVOCOD, NOVAQTDATUAL,NOVOPTCRITICO,NOVODEFA, VEND, MENOS;
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
void listagem (){

         printf(" < < Listagem de Produtos > >\n");
         
         for (L = 0; L < I; L++){
         	
         	printf("Codigo do produto: %d\n", COD[L]);
         	printf("Quantidade do produto: %d\n", QTDATUAL[L]);
         	printf("Ponto critico do produto: %d\n ",PTCRITICO[L] );
	         printf("Valor Unitario do Produto: %.2f \n\n", VALUNIT[L]);
        
 }	
}

void alterar(){
	int ALTERAR;
	
	if(CONSULT == COD[L]){
	               
        printf("DESEJA ALTERAR 1 <-- SIM 2 <-- NAO\n");
        scanf("%d",&ALTERAR);
        
        if(ALTERAR == 1){

	        printf("Novo codigo: ");
	        scanf("%d", &NOVOCOD);
	        COD[L] = NOVOCOD;
	            
		    printf("Nova quatidade:");
		    scanf("%d", &NOVAQTDATUAL);
		    QTDATUAL[L] = NOVAQTDATUAL;
		    
		    printf("Novo ponto critico:");
		    scanf("%d", & NOVOPTCRITICO);
		    PTCRITICO[L] = NOVOPTCRITICO;  
		    
		    printf("\nNovo valor unitario: ");
			 scanf("%f", &NOVOVALUNIT);
			 VALUNIT[L] = NOVOVALUNIT;
    	}
    	
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
	

		
			printf("Quantidade desejada do produto: \n");
			scanf("%d", &QTDATUAL[L]);
			
			printf("Venda feita com sucesso!");
		   scanf("%d", &VEND);
	      printf("Defasagem:%.2f\n\n",DEFA);
	      DEFA = QTDATUAL- PTCRITICO; 
		
		
	printf("Quantidade insuficiente\n");

}

system("pause");
system("cls");

}	  

	
int main (){

while (OPCOES != 6){
	
	  printf("\n < < MENU > > \n");
	  printf("\n1 - Incluir Produtos");
	  printf("\n2 - Listar Produtos");
	  printf("\n3 - Alterar Produtos");
	  printf("\n4 - Consultar Produtos");
	  printf("\n5 - Vendas");
	  printf("\n6 - Sair");
	  
	  printf("\nEscolha o que quer fazer\n");
	  scanf("%d", &OPCOES);
	  system("cls");
	  
	  
	if (OPCOES == 1 && I < 500){
	     incluir ();
	     system("pause");
	     system("cls");
		}
	else if (OPCOES == 2){
			listagem();
			system("pause");
		   system("cls");
		
	    }
	else if (OPCOES == 3){
		alterar();
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


