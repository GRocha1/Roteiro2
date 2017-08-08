#include <stdio.h>
#include <stdlib.h>

void nlinhas (int n){
    int lin, col;

    for(lin = 1; lin <= n; lin++){
        for(col = 1; col <= lin; col++){
            printf("%d ", lin);
        }
        printf("\n");
    }
}

int main(void){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    nlinhas(n);
    return 0;
}
