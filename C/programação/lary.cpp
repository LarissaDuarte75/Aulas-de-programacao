#include<stdio.h>
#include<stdlib.h>


int COD[100], QTDATUAL[100], PTCRITICO[100], DEFA, I, L, OPCOES,BUSCAR, NOVOCOD, NOVAQTDATUAL,NOVOPTCRITICO,NOVODEFA, VEND, MENOS;
float VALUNIT[100],NOVOVALUNIT;


void cadastrar(){
		
	printf("   < <  Incluir Produtos > > \n\n");
	
	printf("Codigo do Produto::"); 		
	scanf("%d",&COD[I]);

	while(COD[I] != 0 && I < 100){

		printf("Quantidade:"); 					
		scanf("%d",&COD[I]);
		printf("Ponto critico:");	
		scanf("%d",&PTCRITICO[I]);
		printf("Valor Unitario: ");
	  	scanf("%f", & VALUNIT[I]);
		system("cls");
		I++;
		
	printf("< < Incluir produtos > > \n");
	    printf("Codigo do produto: ");
	    scanf("%d", &COD[I]);
	}
}

void listar(){
	printf("          < < Listagem de Produtos > >\n\n");
	for(L=0; L < I; L++){
		printf("Codigo do produto: %d \n",COD[L]);
		printf("Quantidade do produto: %d \n", QTDATUAL[L]);
		printf("Ponto critico do produto: %d\n",PTCRITICO[L] );
		printf("Valor Unitario do Produto: %.2f \n\n", VALUNIT[L]);
	}
}
void buscar(){
	printf("Codigo do produto:");	
	scanf("%d",&BUSCAR);
	
	for(L=0; L < I; L++){    
	    if(BUSCAR == COD[L]){
	                     
		    printf("Quantidade do produto: %d \n",QTDATUAL[L]);
		    printf("Valor Unitario do Produto:%.2f\n\n",VALUNIT[L]); 
		    
		    break;
	    }
	}
	if(COD[L] != BUSCAR){
	
		printf("Codigo nao encontrado!!");
	}
	system("pause");
	system("cls");
}

void alterar(){
	int ALT;
	buscar();
      
	if(BUSCAR == COD[L]){
	               
     printf("DESEJA ALTERAR 1 <-- SIM 2 <-- NAO\n");
     scanf("%d",&ALT);
     
     if(ALT == 1){

      printf("Novo codigo: ");
      scanf("%d", &NOVOCOD);
      COD[L] = NOVOCOD;
            
	   printf("Nova quatidade:");
	   scanf("%d", &NOVAQTDATUAL);
	   QTDATUAL[L] = NOVAQTDATUAL;
	    
	   printf("Novo ponto critico:");
	   scanf("%d", &NOVOPTCRITICO);
	   PTCRITICO[L] = NOVOPTCRITICO;  
	    
	   printf("\nNovo valor unitario: ");
		scanf("%f", &NOVOVALUNIT);
		VALUNIT[L] = NOVOVALUNIT;
    	}
    	
	}
}

void vendas (){

	 printf(" < < Venda de Produtos > >\n");
	 printf("Codigo do produto: ");
	 scanf("%d", &COD);


for(L=0; L < I; L++){
	

	printf("Quantidade desejada do produto: \n");
	scanf("%d", &QTDATUAL[L]);
	QTDATUAL[L]= QTDATUAL[L] - VEND;

	printf("Venda feita com sucesso!");
   scanf("%d", &VEND);
   printf("Defasagem:\n\n");
   scanf("%d",&DEFA);


	if(COD[L] != BUSCAR){
	
		printf("Quantidade insuficiente!!");
	}
	system("pause");
	system("cls");
break;
}	  
}

int main(){
	
	while(OPCOES != 6){
		
		
	  printf("\n < < MENU > > \n");
	  printf("\n1 - Incluir Produtos");
	  printf("\n2 - Listar Produtos");
	  printf("\n3 - Alterar Produtos");
	  printf("\n4 - Consultar Produtos");
	  printf("\n5 - Vendas");
	  printf("\n6 - Sair\n");
	  
		
		printf("\nDIGITE:");
		scanf("%d",&OPCOES);
		
		system("cls");
		
		if(OPCOES == 1 && I < 100){
			cadastrar();
			system("cls");
		}
		else if(OPCOES == 2){
			listar();
			system("pause");
			system("cls");
		}
		else if(OPCOES == 3){
			alterar();
			system("cls");
			}
		else if(OPCOES == 4){
			buscar();
	}
		else if (OPCOES == 5){
		 vendas ();
		 system("pause");
		 system("cls");
			
		}
	}
}
