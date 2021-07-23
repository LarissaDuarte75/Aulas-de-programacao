// LARISSA DE OLIVEIRA DUARTE 20102240

#include<stdio.h>
#include<stdlib.h>

int TERMOS,QTD;

void soma(){
int NUM1=1,NUM2=1,F,I,SOMA;

printf("%d - %d - ",NUM1,NUM2);
for(I=3;I<=TERMOS;I++){
F=NUM1*NUM2;
printf("%d - ",F);
NUM1 = NUM2;
NUM2 = F;
}
}

int main(){

printf("Numero de termos\n");
printf("Digite a quantidade de termos= ");
scanf("%d",&TERMOS);
while(QTD>1){
soma();
system("pause");
system("cls");
printf("Numero de termos\n");
printf("Digite a quantidade de termos= ");
scanf("%d",&QTD);
}
}

