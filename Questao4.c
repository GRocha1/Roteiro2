#include <stdio.h>
#include <stdlib.h>

int eh_divisivel (int *num1, int *num2){

     if(*num1 % *num2 == 0){
     return 1;
     }
     else{
        return 0;
     }
}
int eh_primo (int *num1){
    int i, j = 0;
    int eh_primo = 1;
                for(i = 1; i <= *num1; i++){
                if(eh_divisivel(num1, &i) == 1){
                   j++;
                }
            }
            if(j == 2){
                    eh_primo = 1;
                    return eh_primo;
            }
            else{
                eh_primo = 0;
                return eh_primo;
            }
}

int main (void){
    int num, num1, num2;

    printf("Insira dois numeros: ");
    scanf("%d %d", &num1, &num2);

    eh_divisivel(&num1, &num2);
    if(eh_divisivel == 1){
        printf("O %d eh divisivel por %d\n", num1, num2);
    }else{
        printf("O %d nao eh divisivel por %d\n", num1, num2);
    }
    printf("Insira um numero: ");
    scanf("%d", &num);
    eh_primo(&num);
    if(eh_primo == 1){
         printf("O numero %d eh primo\n", num);
    }else{
         printf("O numero %d nao eh primo\n", num);
    }

    return 0;
}
