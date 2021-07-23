#include<stdlib.h>
#include<stdio.h>

int main (){
	A[10],B[10],C[10],I;
	
	printf("\nInterseccao de vetores\n: ");
	
	for(I=0;I<=9;I++){
		printf("\ndigite numero\n: ")
		scanf("%d",&A[I]);
	}
	for(I=0;I<=9;I++){
		printf("\ndigite numero\n: ")
		scanf("%d",&B[I]);
	
}
algoritmo "Intersecção de vetores"
var
   A, B, C: vetor [1..10] de inteiro
   i, j, posicao: inteiro
inicio
      posicao<-1
      para i de 1 ate 10 faca
           leia (A[i])
           leia (B[i])
      fimpara
      para i de 1 ate 10 faca
           para j de 1 ate 10 faca
                se (A[i]=B[j]) entao
                   C[posicao]<-A[i]
                   posicao<-posicao+1
                fimse
           fimpara
      fimpara
      para i de 1 ate posicao-1 faca
           escreval(C[i])
      fimpara
fimalgoritmo
