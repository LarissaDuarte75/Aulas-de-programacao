#include <stdio.h>    
int main ()
{
	int i, a;
 nome do caractere [200];
 printf ("\ t \ t \ t \ t -: insira um número: - \ n \ n");
 printf ("\ t \ t \ t \ n 1. INICIE O QUIZ: \ t \ t \ t \ n 0. SAI DO QUIZ: \ t \ t \ n");
 scanf ("% d", & i);
 interruptor (i)
 { 
 
     caso 1:
  
   printf ("\ n \ t \ t \ t Insira seu nome");
   scanf ("% s", & nome);
   printf ("\ n \ t \ t \ t NOME DO JOGADOR É% s", nome);
   printf ("\ n \ n \ t \ t \ t [SELECIONE E ENTRE O NÚMERO DE RESPOSTA.]");
   printf ("\ n \ n \ t \ t Q1.Qual é a capital da Índia? \ n");
   printf ("\ n \ n \ n \ t \ t 1. DELHI \ n \ t \ t 2.MUMBAI \ n \ n \ t");
   scanf ("% d", & a);
   if (a == 1)
    printf ("\ n \ n \ t \ t COREITO !!!");
   caso contrário, se (a == 2)
    printf ("\ n \ t \ t ERRADO !!!");
   outro 
    printf ("\ n \ t \ t INVÁLIDO !!!");
     caso 0:
     quebrar;
     padrão :
      printf ("\ n \ n \ t \ t \ t entrada inválida !!!!");
      quebrar;
    }
 retornar 0;     } 
