#include<stdio.h>
#include<stdlib.h>
main(){
	float VALREAL,COTDOLAR,COTEURO,VALDOLAR,VALEURO;
	printf("CONVERSAO DE MOEDAS\n\n");
	printf("VALOR EM REAIS=");
	scanf("%f",& VALREAL);
	printf("COTACAO DO DOLAR=");
	scanf("%f", & COTDOLAR);
	printf("COTACAO DO EURO=");
	scanf("%f", & COTEURO);
	VALDOLAR=VALREAL/COTDOLAR;
	VALEURO=VALREAL/COTEURO;
	printf("VALOR EM DOLAR= %.2f\n\n",VALDOLAR);
	printf("VALOR EM EURO= %.2f\n\n",VALEURO);
	system("pause");
}

