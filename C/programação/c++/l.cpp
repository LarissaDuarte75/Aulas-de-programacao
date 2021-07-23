    switch(esc){

        case 1: 
        ADICIONAR();
        system("cls");
        break;

        case 2:
        LISTAR();
        system("cls");
        break;

        case 3: 
        EDITAR();
        system("cls");
        break;

        case 4: 
        system("pause");
        system("cls");
        break;

    }
#include <stdio.h>
#include <stdlib.h>

 char NOME[100];
 int J, I, NOVO,ESCOLHA;

void cadastro() {
    system("cls");


    system("cls");
     printf("\nNOME DO PRODUTO\n");
     scanf("%s",NOME);
     while(NOME[I]!=0 && I<100){


     printf("\nPRODUTO %s ADICIONADO\n", NOME);
     I++;
     
     system("cls");
     printf("\nNOME DO PRODUTO\n");
     scanf("%s",NOME);
    }


    if(NOME[I] == 0 ){


    }

}

void Listagem() {
    system("cls");

    printf("\nLISTAGEM DE PRODUTOS\n");
    for (J=0; J<I; J++){
        printf("\nNOME DO PRODUTO %d\n", NOME[100]);
    }
    system("pause");
}

int EDITAR(){
    system("cls");
    int ALTERAR;
    if (ALTERAR == NOME[100]){
        printf("\nPRECISA ALTERAR? 1- sim  2- nao \n");
        scanf("%d", &ALTERAR);

        if (ALTERAR == 1){
            printf("\nDIGITE O NOME DO PRODUTO\n");
            scanf("%d", &NOVO);
            NOME[100] = NOVO;
            system("pause");
        }
    }

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

