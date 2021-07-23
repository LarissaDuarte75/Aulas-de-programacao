#include<stdio.h>
#include<stdlib.h>


int COD[10],NOME[10],DEFASAGEM[10],I,J,OP,PROCURAR,NOVOCOD,DFS,NOVONOME;
float VU[10],PONTOCRITICO,NOVOVU,QTDATUAL,QTDVENDIDA,QTDTOTAL,NOVOPONTOCRITICO,NOVAQTDTOTAL;

void cadastrar(){

printf("    < < CADASTRO DE PRODUTOS > >\n\n");

printf("Codigo do Produto:");         scanf("%d",&COD[I]);

while(COD[I] != 0 && I < 10){

printf("Nome do Produto:");             scanf("%d",&NOME[I]);
printf("Ponto Critico:");               scanf("%f",&PONTOCRITICO);
printf("Quantidade total do produto:");      scanf("%f",&QTDTOTAL);
printf("Valor Unitario:");                 scanf("%f",&VU[I]);

system("cls");
I++;

}
}

void listar(){
printf("          < < LISTAGEM DE PRODUTOS > >\n\n");
for(J=0; J < I; J++){
printf("CODIGO DO PRODUTO: %d \n",COD[J]);
printf("NOME DO PRODUTO: %d \n", NOME[J]);
printf("VALOR UNITARIO: %.2f \n\n", VU[J]);
}
}
void consultar(){
printf("CODIGO DO PRODUTO:"); scanf("%d",&PROCURAR);

for(J=0; J < I; J++){    
   if(PROCURAR == COD[J]){
                    
   printf("NOME DO PRODUTO: %d\n",NOME[J]);
   printf("VALOR UNITARIO:%.2f\n\n",VU[J]);
printf("QUANTIDADE ATUAL:%.2f\n\n",QTDATUAL); 
QTDATUAL=QTDTOTAL-QTDVENDIDA;
printf("PONTO CRITICO: %d\n",PONTOCRITICO);
printf("DEFASAGEM:%.2f\n\n",DFS);
DFS = QTDATUAL-PONTOCRITICO; 
   
   break;
   }
}
if(COD[J] != PROCURAR){

printf("CODIGO NAO ENCONTRADO!!");
}
system("pause");
system("cls");
}

void alterar(){
int ALT;
consultar();
      
if(PROCURAR == COD[J]){
              
        printf("DESEJA ALTERAR 1 <-- SIM 2 <-- NAO\n");
        scanf("%d",&ALT);
        
        if(ALT == 10){

       printf("NOVO CODIGO: ");
       scanf("%d", &NOVOCOD);
       COD[J] = NOVOCOD;
           
   printf("NOME DO PRODUTO:");
   scanf("%d", &NOVONOME);
   NOME[J] = NOVONOME; 
   
   printf("NOVO PONTO CRITICO:");
   scanf("%d", &NOVOPONTOCRITICO);
   PONTOCRITICO= NOVOPONTOCRITICO;
   
printf("NOVA QUANTIDADE TOTAL:");
   scanf("%d", &NOVAQTDTOTAL);
   QTDTOTAL = NOVAQTDTOTAL;   

printf("NOVO VALOR UNITARIO:");
   scanf("%d", &NOVOVU);
   VU[J] = NOVOVU;  
    }
    
}
}




int main(){

while(OP != 5){

printf("=========================================\n");
printf("============== M E N U ==================\n");
printf("=========================================\n\n");

printf("1 - CADASTRAR PRODUTOS.\n2 - LISTAR PRODUTOS.\n3 - EDITAR PRODUTOS.\n4 - CONSULTAR PRODUTOS.\n5 - SAIR.\n\n"); 

printf("DIGITE:");
scanf("%d",&OP);

system("cls");

if(OP == 1 ){
cadastrar();
system("cls");
}
else if(OP == 2){
listar();
system("pause");
system("cls");
}
else if(OP == 3){
alterar();
system("cls");
}
else if(OP == 4){
consultar();

}
}
}
