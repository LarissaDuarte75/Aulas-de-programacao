#include <stdio.h>
#include <stdlib.h>


int FATORIAL (int N){
	int FAT = 1, I;
	for ( I = N; I>=1; I--){
		FAT = FAT * I;
		
		printf ("%d\n",FAT);
	}
	return (FAT);
}

main (){
	int NUM;
	printf ("<<<<<< PROGRAMA FATORIAL >>>>>>\n\n");
		
	printf ("Informe o primeiro numero: ");
	scanf ("&d", &NUM);	
	printf ("\n");
	printf ("Resposta e......:  %d\n\n",FATORIAL(NUM));
	system ("pause");
}
