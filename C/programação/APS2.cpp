#include <stdio.h>    
int main ()
{
	int i, a;
 nome do caractere [200];
 printf ("\ t \ t \ t \ t -: insira um n�mero: - \ n \ n");
 printf ("\ t \ t \ t \ n 1. INICIE O QUIZ: \ t \ t \ t \ n 0. SAI DO QUIZ: \ t \ t \ n");
 scanf ("% d", & i);
 interruptor (i)
 { 
 
     caso 1:
  
   printf ("\ n \ t \ t \ t Insira seu nome");
   scanf ("% s", & nome);
   printf ("\ n \ t \ t \ t NOME DO JOGADOR �% s", nome);
   printf ("\ n \ n \ t \ t \ t [SELECIONE E ENTRE O N�MERO DE RESPOSTA.]");
   printf ("\ n \ n \ t \ t Q1.Qual � a capital da �ndia? \ n");
   printf ("\ n \ n \ n \ t \ t 1. DELHI \ n \ t \ t 2.MUMBAI \ n \ n \ t");
   scanf ("% d", & a);
   if (a == 1)
    printf ("\ n \ n \ t \ t COREITO !!!");
   caso contr�rio, se (a == 2)
    printf ("\ n \ t \ t ERRADO !!!");
   outro 
    printf ("\ n \ t \ t INV�LIDO !!!");
     caso 0:
     quebrar;
     padr�o :
      printf ("\ n \ n \ t \ t \ t entrada inv�lida !!!!");
      quebrar;
    }
 retornar 0;     } 
