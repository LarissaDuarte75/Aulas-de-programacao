     #include<stdio.h>
     #include<stdlib.h>
     main(){
     	float NUM1, NUM2, NUM3, MAIOR;
     	printf("descobrir numero maior\n\n");
     	printf("digite primeiro numero: ");
     	scanf("%f",&NUM1);
     	MAIOR = NUM1;
     	printf("digite segundo numero: ");
     	scanf("%f",&NUM2);
     	if (NUM2 > MAIOR) {
     		MAIOR = NUM2;
		 }
     	printf("digite terceiro numero: ");
     	scanf("%f",&NUM3);
     	if (NUM3 > MAIOR) {
     		MAIOR = NUM3;
		 }
		 printf("o maior numero e: %.1f\n\n", MAIOR);
		 system("pause");
	 }

