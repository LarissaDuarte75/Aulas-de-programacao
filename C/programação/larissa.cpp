#include <stdlib.h>
#include <stdio.h>


/*Estrutura*/



struct MODELO
{
int sapato;
int sapato_couro;
int sapato_tenis;
};
struct CLIENTE
{
char nome[20];
char cpf[20];

};
struct VENDEDOR
{
char vendedor[20];
};


/*Fim declaração de struc*/


//Funcao cadastro
void cadastro(struct MODELO produto_sapato[500],int quantidade);
//Funcao relatorio
void relatorio(struct MODELO produto_sapato[500],int quantidade);
//Funcao vendas
void vendas(struct MODELO produto_sapato[500],int quantidade);
void cadastrov(VENDEDOR cadastro_vendedor[500]);
void cadastroc(CLIENTE cadastro_cliente[500]);
void vendasd(struct MODELO produto_sapato[500],int qtd_venda);
void sair();

/*funcao Principal*/
int main()
{
int menu,qtd,indice,qtd_venda;
struct MODELO cadastro_sapato[500];
struct VENDEDOR cadastro_vendedor[500];
struct CLIENTE cadastro_cliente[500];
menuPrincipal:
while (menu < 8)

{
printf("MENU principal\n");
printf("1 - Cadastro de produto\n");
printf("2- Cadastro vendedor\n");
printf("3- Cadastro cliente\n");
printf("4- Registro de vendas\n");
printf("5- Relatorio\n");
printf("6- Vendas do dia\n");
printf("7- Sair\n");
printf("Selecione a opcao desejada ->");
scanf("%d,&menu");
system("cls");

switch(menu)
{
case 1:
cadastro(cadastro_sapato,qtd);
break;
case 2:
cadastrov(cadastro_vendedor);
break;
case 3:
cadastroc(cadastro_cliente);
break;
case 4:
vendas(cadastro_sapato,qtd);
break;
case 5:
relatorio(cadastro_sapato,qtd);
break;
case 6:
vendasd(cadastro_sapato,qtd);
break;
case 7:
sair();
break;
}
system("cls");      
}
}
/*Fim menu Principal*/


/*Função para cadastro*/
void cadastro(struct MODELO produto_sapato[500],int quantidade)
{
int opcao_cadastro,opcao_material,qtd_sapatocouro,qtd_sapatotenis;
menuCadastro:

printf("------Cadastro Produto no Estoque-------\n\n");
printf("1- Cadastro Sapato\n");
printf("2- Volta ao menu principal\n");
scanf("%d,&opcao_cadastro");
system("cls");

switch(opcao_cadastro)
{

/*Cadastro Sapato*/
/*Selecao de materiais*/
case 1:
printf("Deseja cadastrar sapato\n");
printf("1- Sapato couro\n");
printf("2- Sapoto tenis\n");
printf("3- Para voltar para menu de cadastro\n");
scanf("%d,&opcao_material");
system("cls");
/*Selecao de quantidade*/
switch(opcao_material)
{
case 1:
printf("Insira a quantidade de Sapato couro ->");
scanf("%d,&qtd_sapatocouro");

produto_sapato[quantidade].sapato+=qtd_sapatocouro;
produto_sapato[quantidade].sapato_couro+=qtd_sapatocouro;
break;

case 2:
printf("Insira a quantidade de Sapato tenis ->");
scanf("%d,&qtd_sapatotenis");

produto_sapato[quantidade].sapato+=qtd_sapatotenis;
produto_sapato[quantidade].sapato+=qtd_sapatotenis;
break;

case 3:
goto menuCadastro;
break;
}

}
}
void cadastrov(VENDEDOR cadastro_vendedor[500])
{
VENDEDOR cadastro;

printf("VENDEDOR:\n");
scanf("%s,cadastro.vendedor");

printf("Cpf:\n");
scanf("%s,cadastro.cpf");

system("cls");

printf("Vendedor cadastrado com sucesso\n");
printf("aperte qualquer tecla para continuar");

}
void cadastro(CLIENTE cadastro_cliente[500])
{
CLIENTE cadastro;

printf("\n\t\tVoce esta na funcao cadastro de cliente\n\n");

printf("Nome:\n");
scanf("%s,&cadastro.nome");
printf("Cpf:\n");
scanf("%s,&cadstro.cpf");

system("cls");
printf("Cadastro concluido com sucesso");
printf("Para voltar ao menu principal digite qualquer tecla");





}
