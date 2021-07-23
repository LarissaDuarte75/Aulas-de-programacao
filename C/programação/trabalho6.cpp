     #include<stdio.h>
     #include<stdlib.h>
     main(){
     	float NOT1, NOT2, NOT3, MED, COD;
     	printf("media ponderada\n\n");
     	printf("digite o codigo: ");
     	scanf("%f", & COD);
     	printf("digite a primeira nota: ");
     	scanf("%f", & NOT1);
     	printf("digite a segunda nota: ");
     	scanf("%f", & NOT2);
     	printf("digite terceira nota: ");
     	scanf("%f", & NOT3);
     	MED=(NOT1*4+NOT2*3+NOT3*3)/10;
     	if (MED>5){
     		printf("%.0f %.2f APROVADO", COD, MED);
		 }
     	else {
     		printf("%.0f  %.2f REPROVADO", COD, MED);
		 }
     	system("pause");
	 }
