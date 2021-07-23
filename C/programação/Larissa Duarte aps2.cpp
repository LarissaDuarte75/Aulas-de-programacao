/* Jogo de quiz sobre conhecimentos gerais com estruturas de decisao e repeticao*/

#include<stdlib.h>
#include<stdio.h>
main () {
	
      int JOGO, R1, R2, R3, R4;
      
	  
	  printf("<< jogo de quiz >>\n\n");
	  printf("digite numero 1 para iniciar: ");	
	  scanf("%d", &JOGO);
	  do{
	  	printf("\n Quantos litros de sangue uma pessoa tem?\n: ");
	  	printf("\n (1) 2 a 4 litros \n");
	  	printf("\n (2) 4 a 6 litros \n");
	  	printf("\n (3) 10 litros \n");
	  	printf("\n (4) 7 litros \n");
	  	printf("\n digite sua resposta\n: ");
	  	scanf("%d",&R2);
	  	
		  if("resposta == 2"){
	  		printf("\n 2 e a resposta correta, O volume de sangue de um adulto pode ser de 4 a 6 litros de sangue dependendo do seu peso.\n\n");
		  }
	  	  else{
			printf("(1),(3),(4), respostas incorretas");
	  	  	
			}


		  printf("\n Qual o menor pais do mundo?\n: ");
	  	printf("\n (1) Vaticano \n");
	  	printf("\n (2 Monaco \n");
	  	printf("\n (3) Brasil \n");
	  	printf("\n (4) EUA \n");
	  	printf("\n digite sua resposta: ");
	  	scanf("%d, &R1");
	  	
	  	if("resposta == 1"){
	  			printf("\n 1 e a resposta correta, O Vaticano tem apenas 0,44km²\n\n");
		  }
	  	  else{
	  		printf("(2),(3),(4), respostas incorretas");
		  }
	  	printf("\n Quanto tempo a luz do sol leva para chegar a terra?: ");
	  	printf("\n (1) 12 minutos \n");
	  	printf("\n (2) 12 horas \n");
	  	printf("\n (3) 8 minutos \n");
	  	printf("\n (4) segundos \n");
	  	printf("\n digite sua resposta: ");
	  	scanf("%d, &R3");
	  	
	  	if("resposta == 3") {
		
	  		printf("\n 3 e a resposta correta, E calculada com base com distancia do sol em relacao a terra 15000000 dividida por 300000 e igual a 500 segundos ou seja, 8,33 minutos.\n\n");
		  }
	  	  else {
	  		printf("(1),(2),(4), respostas incorretas");
		  }
		  printf("\n Em que periodo o fogo foi descoberto?: ");
	  	printf("\n (1) neolitico \n");
	  	printf("\n (2) idade dos metais \n");
	  	printf("\n (3) idade media\n");
	  	printf("\n (4) Paleolitico \n");
	  	printf("\n digite sua resposta: ");
	  	scanf("%d, &R4");
	  	
	  	if("resposta == 4"){
		  
	  		printf("\n 4 e a resposta correta, comecou a ser utilizado quando os homens aprenderam que era possivel obter fogo por meio de atrito de madeira ou pedra\n\n");
		  }
	  	  else{
	  		printf("(1),(2),(3), respostas incorretas");
		  }
		  printf("\n Qual montanha mais alta do Brasil?: ");
	  	printf("\n (1) Monte Roraima \n");
	  	printf("\n (2) Pico Parana \n");
	  	printf("\n (3) Pico da Neblina \n");
	  	printf("\n (4) Pico da Nandeira \n");
	  	printf("\n digite sua resposta: ");
	  	scanf("%d, &R3");
	  	
		  if("resposta == 3"){
		  
	  		printf("\n 3 e a resposta correta, Pico da Neblina e o ponto mais alto contando com 2995 metros de altura e fica no Amazonas \n\n");
		  }
	  	  else{
	  		printf("(1),(2),(4), respostas incorretas");
		  }
		   printf("\n Qual a velocidade da luz?: ");
	  	printf("\n (1) 299 792 458 m/s \n");
	  	printf("\n (2) 300 000 000 m/s \n");
	  	printf("\n (3) 199 792 458 m/s \n");
	  	printf("\n (4) 150 000 000 m/s \n");
	  	printf("\n digite sua resposta: ");
	  	scanf("%d, &R1");
	  	
	  	 if("resposta == 1"){
		
	  		printf("\n 1 e a resposta correta, A primeira medicao foi feita em 1676 e foi aproximada, hoje se tem com precisao a velocidade da luz \n\n");
		  }
	  	  else{
	  		printf("(2),(3),(4), respostas incorretas");
		  }
		   printf("\n Qual destes paises e transcontinental?: ");
	  	printf("\n (1) Brasil \n");
	  	printf("\n (2) Filipinas \n");
	  	printf("\n (3) Istambul \n ");
	  	printf("\n (4) Russia \n ");
	  	printf("\n digite sua resposta: ");
	  	scanf("%d, &R4");
	  	 
		   if("resposta == 4"){
		
	  		printf("\n 4 e a resposta correta, A Russia e transcontinental pois pertence a mais de um continente, Europa e Asia \n\n");
		  }
	  	  else{
	  		printf("(1),(2),(3), respostas incorretas");
		  }
		   printf("\n Qual tipo sanguineo e considerado universal?: ");
	  	printf("\n (1) Tipo A \n");
	  	printf("\n (2) Tipo B \n");
	  	printf("\n (3) Tipo O \n");
	  	printf("\n (4) Tipo AB \n ");
	  	printf("\n digite sua resposta: ");
	  	scanf("%d, &R3");
	  	 
	  	 if("rsposta == 3"){
		   
	  		printf("\n 3 e a resposta correta, tipo O, ele doa para todos os tipos A, B, AB, e O, mas so recebe de O, por isso e doador universal \n\n");
		  }
	  	  else{
	  		printf("(1),(2),(4), respostas incorretas");
		  }
		  printf("\n Em que oceano fica Madagascar?: ");
	  	printf("\n (1) Oceano Indico \n");
	  	printf("\n (2) Oceano Antartico \n");
	  	printf("\n (3) Oceano Atlantico \n");
	  	printf("\n (4) Oceano Artico \n");
	  	printf("\n digite sua resposta: ");
	  	scanf("%d, &R1");
	  	
		  if("resposta == 1"){
		
	  		printf("\n 1 e a resposta correta, E um pais insular banhado pelo Oceano Indico  \n\n");
		  }
	  	  else{
	  		printf("(2),(3),(4), respostas incorretas");
		  }
	  	  printf("\n Em que seculo o continente europeu foi devastado pela peste bubonica?: ");
	  	printf("\n (1) Seculo X \n ");
	  	printf("\n (2) Seculo XI \n ");
	  	printf("\n (3) Seculo XII \n");
	  	printf("\n (4) Seculo XIV \n ");
	  	printf("\n digite sua resposta: ");
	  	scanf("%d, &R4");
	  	
	  	  if("resposta == 4"){
		
	  		printf("\n 4 e a resposta correta, A epidemia ocorreu entre 1347 e 1453 \n\n");
		  }
	  	  else{
	  		printf("(1),(2),(3), respostas incorretas");
		  }
		  printf("<< jogo de quiz >>\n\n");
	  printf("digite numero 1 para iniciar ou 0 para sair: ");	
	  scanf("%d", &JOGO);
	  }while(JOGO!= 0);
	    system("pause");
         system("cls");
}
