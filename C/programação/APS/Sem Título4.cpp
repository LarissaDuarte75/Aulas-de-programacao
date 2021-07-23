//Larissa Duarte, Nicole de Melo, Gabriela Serra
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main(){
     FILE *pont_aps;

     int cod;
     float valor;
     char produto[100],c;

     pont_aps=fopen("arquivo.txt","a");

     if(pont_aps==NULL){
         printf("Erro ao criar arquivo!!\n\n");
         system("pause");
         exit;
     }
     printf("\nCadastro do estoque\n\n");

     printf("\nDigite o produto\n");
     gets(produto);

    do{
     c = getc(pont_aps);

     printf("\nDigite o codigo\n");
     scanf("%d", &cod);

     printf("\nDigite o preco\n");
     scanf("%f",&valor);

     fprintf(pont_aps,"%s","\n");
     fprintf(pont_aps,"%s",produto);
     fprintf(pont_aps,"%s","\n");
     fprintf(pont_aps, "%d",cod);
     fprintf(pont_aps,"%s","\n");
     fprintf(pont_aps,"%f",valor);


     system("cls");

     printf("\nCadastro do estoque\n\n");

     printf("\nDigite o produto\n");
     gets(produto);

    }

    while(c != EOF);

     fclose(pont_aps);
     printf("Produto adicionado com sucesso!!\n\n");
     system("pause");


}

