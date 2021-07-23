     #include<stdio.h>
     #include<stdlib.h>
     main(){
     	int A, B, C;
     	printf ("ordem decrescente\n\n");
     	printf("digite primeiro numero");
     	scanf("%d", &A);
     	printf("digite segundo numero");
     	scanf("%d", &B);
     	printf("digite terceiro numero");
     	scanf("%d", &C);
     	if (A>B)
     	if (B>C) {
		 printf ("%2d%2d%2d\n", A, B, C);}
     	else
     	if (A>C) printf ("%2d%2d%2d\n", A, C, B);
     	else printf ("%2d%2d%2d\n", C, A, B);
     	else
     	if (B>C)
     	if(A>C) printf ("%2d%2d%2d\n", B, A, C);
     	else printf ("%2d%2d%2d\n", B, C, A);
     	else printf ("%2d%2d%2d\n", C, B, A);
     	system("pause");
     	 }
