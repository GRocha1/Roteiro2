#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    char telefone[10], novo_Telefone[10];
    int i, j=1, digitos=0;

    printf("Informe o telefone: ");
    fgets(telefone,10,stdin);

    for(i=0; i<strlen(telefone)-1; i++)
    {
        if((telefone[i] != '-')){

            digitos++;
        }
    }


    if(digitos == 7)
    {
        novo_Telefone[0] = '3';
        for(i=0; i<8; i++)
        {
            if(telefone[i] == '-')
            {
                i++;
            }
            novo_Telefone[j] = telefone[i];
            j++;

        }
    }else if(digitos == 8)
          {
            j = 0;

                for(i=0; i<8; i++)
                {
                    if(telefone[i] == '-'){
                    i++;
                    }
                    novo_Telefone[j] = telefone[i];
                    j++;

               }

          }

    printf("Numero corrigido: \n");
    for(i=0; i<8; i++)
    {

        printf("%c",novo_Telefone[i]);
    }

    return 0;
}
