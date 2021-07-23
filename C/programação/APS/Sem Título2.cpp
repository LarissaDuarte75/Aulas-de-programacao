#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const int qtd = 10;
const int tam = 30;

main()
{
	 float altura,peso,IMC;
    int i, j, x, menor;
    char a[qtd][tam], aux[qtd];
    for(i = 0; i < qtd; i++)
    {
        printf("Informe o %d nome: ", i + 1);
        scanf("%s", a[i]);
    }
        for(i = 0; i < qtd - 1; i++)
        {
                x = 0;
                menor = i;
                for(j = i + 1; j < qtd; j++)
                {
                    x = 0;
                    while(a[menor][x] == a[j][x])
                    {
                            x++;
                    } 
                    if(a[menor][x] > a[j][x])
                    {
                         menor = j;
                    }
                }
                if(menor != i)
                {
                        strcpy(aux, a[menor]);
                        strcpy(a[menor], a[i]);
                        strcpy(a[i], aux);
                }
        }
        for(i = 0; i < qtd; i++)
        {
                printf("%s%c", a[i], 10);
        }
        
        for(i = 0; i < IMC; i++)
        {
                printf("%.2f");
        }
        printf("Entre com altura do atleta:",i+1);
        scanf("%f",&altura);
        
        printf("Entre com peso do atleta:",i+1);
        scanf("%f",&peso);
        
        while(peso<=0); {  
        IMC=((peso))/((altura*altura));
        
        	if(IMC<=18.50)
			    printf("Abaixo do peso\n");
			    else
			    {
			      if(IMC<25.00)
			      printf("Peso Normal\n");
			      else
			      {
			        if(IMC<30.00)
			        printf("Sobrepeso\n");
			        else
			        {
			          if(IMC>=30.00)
			          printf("Obesidade grau I\n");
			          else
			        {
			          if(IMC>=35.00)
			          printf("Obesidade grau II\n");
			          
						 else
			        {
			          if(IMC>=40.00)
			          printf("Obesidade grau III\n");
			          }
			         }
			        }
			      }
			    }
			    printf("Altura do atleta e %.2f\n",altura);
				 printf("O peso do atleta e %.2f\n",peso);
				 printf("O IMC e %.2f\n",IMC);
}

