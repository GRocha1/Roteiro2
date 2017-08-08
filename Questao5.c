#include <stdlib.h>
#include <stdio.h>
#define TAMANHO 5



int main()
{

    float V_alt[TAMANHO];
    char V_sexo[TAMANHO];
    int maior, menor,i;

    maior=0;
    menor=0;

    for(i=0; i<TAMANHO; i++)
    {
        printf("Informe a altura da %do pessoa: ",i+1);
        scanf("%*c%f",&V_alt[i]);
        printf("Informe o sexo da %do pessoa. [M/m] p/ MASCULINO e [F/f] p/FEMININO: ",i+1);
        scanf("\n %c",&V_sexo[i]);
    }









    return 0;
}

