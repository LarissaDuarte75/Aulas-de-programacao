#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float massa, altura, _IMC;
    
    printf("Digite sua Massa (Kg): ");
    scanf("%f", &massa);
    printf("Digite sua Altura (Metros): ");
    scanf("%f", &altura);
    
    while (massa != 0){


    _IMC = massa/(pow(altura,2));
    
    printf("-----------------------------------\n");
    printf("Seu IMC e: %0.2f\n",_IMC);

    if(_IMC<17)
    {
        printf(" muito abaixo do peso.\n");
    }
    else
    {
        if(_IMC>17 && _IMC<18.49)
        {
            printf("Abaixo do peso.\n");
        }
        else
        {
            if(_IMC>18.5 && _IMC<24.99)
            {
                printf("Peso normal.\n");
            }
            else
            {
                if(_IMC>25 && _IMC<29.99)
                {
                    printf("Sobrepeso.\n");
                }
                else
                {
                    if(_IMC>30 && _IMC<34.99)
                    {
                        printf("Obesidade grau I.\n");
                    }
                    else
                    {
                        if(_IMC>35 && _IMC<39.99)
                        {
                            printf("Obesidade grau II.\n");
                        }
                        else
                        {
                            if(_IMC>40)
                            {
                                printf("Obesidade grau III.\n");
                            }
                            
                        }
                    }
                }
            }
        }
    }
    									system("pause");
										system("cls");
    
}
		
 

    return 0;
}


