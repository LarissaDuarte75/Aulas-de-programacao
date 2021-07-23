#include<stdio.h>
#include<stdlib.h>

float SOMATORIO (float N1, float N2) {
	float SOMA;
	SOMA = N1+N2;
	return (SOMA);
}


main () {
	   float N1, N2, RESUL;
	   printf("SOMATORIO ENTRE DOIS NUMEROS\n\n");
	   printf("Numero-1: "); 
	   scanf("%f", &N1);
	   printf("Numero-2: "); 
	   scanf("%f", &N2);
	   RESUL = SOMATORIO (N1,N2);
	   printf("Resultado do somatorio: %.2f \n\n", SOMATORIO (N1, N2));
	   system("pause");
}

