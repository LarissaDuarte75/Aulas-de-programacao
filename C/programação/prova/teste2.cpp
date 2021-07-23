#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
 main(){

 FILE *pont_arq;
  float DESVIO,VARIANCIA,NUM1,NUM2,NUM3, MEDIA;
  int I;
 
  pont_arq = fopen("arquivo.txt", "a"); 
  
  if(pont_arq==NULL){
         printf("Erro ao criar arquivo!!\n\n");
         system("pause");
         exit;
     }


	
        printf("Digite o primeiro numero: ");
        scanf("%f", &NUM1);
        printf("Digite o segundo numero: ");
        scanf("%f", &NUM2);
        printf("Digite o terceiro numero: ");
        scanf("%f", &NUM3);
        
     fprintf(pont_arq,"%f","\n");   
     fprintf(pont_arq, "%f", NUM1);
     fprintf(pont_arq,"%f","\n");
     fprintf(pont_arq, "%f", NUM2);
     fprintf(pont_arq,"%f","\n");
     fprintf(pont_arq, "%f", NUM3);
    
    pont_arq = fopen("arquivo2.txt", "a"); 
    MEDIA = (NUM1+NUM2+NUM3)/3;
	 VARIANCIA = pow(NUM1-MEDIA,2) + pow(NUM2-MEDIA,2)+ pow(NUM3-MEDIA,2) /3; 
	 DESVIO= sqrt( VARIANCIA ); 
	  
	  fprintf(pont_arq,"%f","\n");   
     fprintf(pont_arq, "%f", MEDIA);
     fprintf(pont_arq,"%f","\n");
     fprintf(pont_arq, "%f", VARIANCIA);
     fprintf(pont_arq,"%f","\n");
     fprintf(pont_arq, "%f", DESVIO);
     
     fclose(pont_arq);
    
    system("pause");
}
 

