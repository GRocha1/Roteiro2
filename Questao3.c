#include <stdlib.h>
#include <stdio.h>

int Sequencia(int i)
{
    int j,k;

    for (j=1; j<=i; j++)
    {
        for(k=1; k<=j; k++)
            printf("%d ",k);
        puts("");

    }
    return 1;
}


int main()
{
    int valor;

    printf("Informe um valor para a sequencia: ");
    scanf("%d",&valor);

    Sequencia(valor);

    return 0;
}
