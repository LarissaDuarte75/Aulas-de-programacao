#include <stdio.h>
#include <stdlib.h>

int COD[10],I=0,J,QTD[10],CONT[10],ESCOLHA;
float VAL[10];

void cadastro() {
	system("cls");
	
	
	printf("Cadastro do estoque\n\n");
	printf("Para sair digite: 0\n");
	
	printf("Digite o codigo do produto: ");
	scanf("%d",&COD[I]);
	
	
	while(COD[I] !=0 && I<10){
	
	printf("\nDigite a quantidade: ");
	scanf("%d",&QTD[I]);
	
	printf("\nDigite o valor: ");
	scanf("%f",&VAL[I]);
	
	I++;
	system("cls");
	
	printf("\nCadastro do estoque\n\n");
	printf("Para sair digite: 0\n");
	
	printf("Digite o codigo do produto: \n");
	scanf("%d",&COD[I]);
	}
	
	
	if(COD[I] == 0 ){
		
	
	}
	
}

void Listagem() {
	system("cls");
	printf("Produtos cadastrados\n\n");
	for(J=0; J < I; J++){
		CONT[I] = I++;
		
		printf("Produto: %s\n",CONT[I]);
		printf("Codigo: %d\n",COD[J]);
		printf("Quantidade: %d\n",QTD[J]);
		printf("Valor: %.2f\n\n",VAL[J]);
		
	}
	system("pause");
}


int main(){
	do {
	
	printf("--================--\n");
	printf("--=====INICIO=====--\n");
	printf("--================--\n\n");
	
	printf("-=-Escolha o que deseja fazer-=-\n\n");
	printf("==1- Cadastro==\n");
	printf("==2- Listagem==\n");
	printf("==3- Editar ===\n");
	printf("==4- Fechar ===\n\n");
	scanf("%d",&ESCOLHA);
	
	switch(ESCOLHA){
		case 1:
			cadastro();
			break;
			
		case 2:
			Listagem();
			break;
			
		case 3:
			printf("ta na fase beta, espera um pouco");
			break;
			
		case 4:
			system("pause");
	}
	system("cls");
	}
	while(ESCOLHA != 4);
}
