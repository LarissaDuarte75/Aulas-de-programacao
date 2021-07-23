//LARISSA DE OLIVEIRA DUARTE - 20102240
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

main (){
	FILE *pont_prova;
	
	float num1,num2,num3,num4,num5,vari,med,desvi;
   int I,OPCOES;
   
   pont_prova=fopen("arquivo.txt","a");
   
   if(pont_prova==NULL){
         printf("Erro ao criar arquivo!!\n\n");
         system("pause");
         exit;
     }
     
     printf("\nCalculos\n");
     
     printf("\nDigite primeiro numero : \n");
	  scanf("%f",&num1);
	   printf("\nDigite segundo numero  : \n");
	  scanf("%f",&num2);
	  
	  printf("\nDigite terceiro numero : \n");
	  scanf("%f",&num3);
	  
	  printf("\nDigite quarto numero   : \n");
	  scanf("%f",&num4);
	  
	  printf("\nDigite quinto numero   : \n");
	  scanf("%f",&num5);
	  
	  fprintf(pont_prova,"%f","\n");
     fprintf(pont_prova,"%f",num1);
     fprintf(pont_prova,"%f","\n");
     fprintf(pont_prova,"%f",num2);
     fprintf(pont_prova,"%f","\n");
     fprintf(pont_prova,"%f",num3);
     fprintf(pont_prova,"%f","\n");
     fprintf(pont_prova,"%f",num4);
     fprintf(pont_prova,"%f","\n");
     fprintf(pont_prova,"%f",num5);
     
     fclose(pont_prova);
     printf("Valores adicionados!!\n\n");
     system("pause");
	  
		    pont_prova=fopen("arquivo2.txt","a");
	  	    med = (num1 + num2 + num3 + num4 +num5)/5;
	  	    vari = pow(num1 - med,2) + pow(num2 - med,2) + pow(num3 - med,2) + pow(num4 - med,2) + pow(num5 - med,2)/5;
	  	    desvi = sqrt(vari);
	   
	    printf("\nCalculo da Media e: %f\n",med);
	    printf("\nCalculo da variancia e: %f\n",vari);
	    printf("\nCalculo do desvio padrao e: %f\n\n",desvi);
	    system("pause");
	    system("cls");
	    
	  fclose(pont_prova);
     printf("Resultados!!\n\n");
     system("pause");

}

