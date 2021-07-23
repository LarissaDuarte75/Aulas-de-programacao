 #include<stdio.h>
#include<stdlib.h>


int COD[100], QTDATUAL[100], PTCRITICO[100], DEFA, I, L, OPCOES, CONSULT,BUSCAR, NOVOCOD, NOVAQTD,NOVOPTCRITICO,NOVODEFA, VEND, MENOS;
float VALUNIT[100],NOVOVALUNIT;


void incluir (){
int cod_produto COD[L];
int qtd_estoque QTDATUAL[100];
float VALUNIT;
}Estoque;

//Estrutura Pedidos
void vendas(){

int COD;
int VEND;
}Pedido;

int main()
{
Estoque estoque[QTDATUAL];
Pedido pedido[QTDATUAL];
int I;

printf("___Estoque___");
printf("\n\n");
do{
printf("ENTRE COM O CODIGO DA MERCADORIA:");
scanf("%d",&estoque[I].COD);
printf("\n\n");
printf("ENTRE COM A QUANTIDADE EXISTENTE NO ESTOQUE:");
scanf("%d",&estoque[I].QTDATUAL);
printf("\n\n");
printf("ENTRE COM O PRECO DO PRODUTO:");
scanf("%f",&estoque[I].VALUNIT);
printf("\n\n");
}while (estoque[I].COD != 0);

printf("___Pedidos___");
printf("\n\n");
do{
printf("ENTRE COM O CODIGO DO CLIENTE:");
scanf("%d",&pedido[I].cod_cliente);
printf("\n\n");
printf("ENTRE COM O PRODUTO DESEJADO:");
scanf("%d",&pedido[I].COD);
printf("\n\n");
printf("ENTRE COM A QUANTIDADE DESEJADA:");
scanf("%d",&pedido[I].VEND);
printf("\n\n");
}while (pedido[I].cod_cliente != 0);

for(I=0;I<QTD;I++)
{

if(pedido[I].COD) == (Estoque)[I](Estoque){

printf("PRODUTO VENDIDO");
estoque[I].estoque-- ;
scanf("%d",estoque[I].estoque);
}
else
{
printf("NÃO TEMOS A MERCADORIA EM ESTOQUE SUFICIENTE: %d",pedido[I].cod_cliente);
}
}
system("pause");
}
