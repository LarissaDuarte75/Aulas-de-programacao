     #include<stdio.h>
     #include<stdlib.h>
     main(){
     	int X,Y;
     	printf("multiplos ou nao multiplos\n\n");
     	printf("digite primeiro numero: ");
     	scanf("%d", &X);
     	printf("digite segundo numero: ");
     	scanf("%d", &Y);
     	if (X%Y == 0){
     		printf ("sao multiplos\n\n");
		 }
		 else {
		 	printf("nao sao multiplos\n\n");
		 }
		 system("pause");
	 }
