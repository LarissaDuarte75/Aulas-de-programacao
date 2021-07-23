     #include<stdio.h>
     #include<stdlib.h>
     main(){
     	float NUM1,NUM2,MAIOR,MENOR;
     	printf("diferenciar dois numeros\n\n");
     	printf("digite primeiro numero:");
     	scanf("%f",&NUM1);
     	MAIOR = NUM1;
     	printf("digite segundo numero:");
     	scanf("%f",&NUM2);
     	MENOR = NUM2;
     	if (NUM2 > NUM1) {
     		MAIOR = NUM2;
     		MENOR = NUM1;
     		
		 };
		 
		 if (NUM1 == NUM2){
		 	printf("dois numeros iguais\n\n");
		 	 }
		 else {
		 	printf("o maior e o menor numero: %.2f, %.2f\n\n", MAIOR, MENOR);
		 	
		 }
		 system("pause");
}
