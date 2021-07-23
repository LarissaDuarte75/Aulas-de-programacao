     #include<stdio.h>
     #include<stdlib.h>

     	float media (int n, int *VET);
      int main (void)
{
     	int VET[4],media;
     	int I;
     	float media_notas;
     	
     	  for (I = 0; I < 4; I++){
     	  
     	printf("digite os valores desejados: /n ");
     	scanf("%d",&VET[I]);
     }
     
     	media_notas = media(4,VET);
     	
     	printf ( "\nMedia = %.1f \n", media_notas );
     	
     	system("pause");
	 }

