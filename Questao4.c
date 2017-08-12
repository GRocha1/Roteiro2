#include <stdio.h>
#include <stdlib.h>

int Divisivel(int num1, int num2){
    if(num1 % num2 == 0){
        return 1;
    }else{
        return -1;
    }
}

int Primo(int num3){
    int i, primo = 0;

    for(i = 1; i <= num3; i++){
        if(Divisivel(num3, i) == 1){
            primo++;
        }
    }
    if(primo == 2){
        return 1;
    }else{
        return -2;
    }
}

int main (void){
    int num1, num2, num3;

    printf("Insira o dividendo e o divisor: ");
    scanf("%d %d", &num1, &num2);
    if(Divisivel(num1, num2) == 1){
        printf("%d eh divisivel por %d\n", num1, num2);
    }else{
        printf("%d nao eh divisivel por %d\n", num1, num2);
    }

    printf("Insira um numero para verificar se ele eh primo ou nao: ");
    scanf("%d", &num3);
    if(Primo(num3) == 1){
        printf("O numero %d eh primo\n", num3);
    }else{
        printf("O numero %d nao eh primo\n", num3);
    }

    return 0;
}
