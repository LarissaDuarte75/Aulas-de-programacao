#include<stdlib.h>
#include<stdio.h>
#define MAX 20

int main(void) {
  int F[20],G[20],I;
  
  for (int I=0;I<MAX;I++) {
    printf("Informe o valor do elemento %d de F",I);
    scanf("%d",&F[I]);
  }
  for (int I=0;I<MAX;I++) {
    printf("Informe o valor do elemento %d de G",I);
    scanf("%d",&G[I]);
  }
  printf("\nResultado da multiplicacao\n");
  for (int I=0;I<MAX;I++) {
    printf("F[%d]xG[%d]=(%dx%d)=%d \n",I,I,F[I],G[I],F[I]*G[I]);
  }
  
  return 0;
}
