#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char sexo[10];
    double altura[10];
} tPessoa;

int main(void){

    int i, m = 0, h = 0;
    double maior = 0, menor = 100, mediaH = 0, mediaF = 0;
    int sexo1, sexo2;
    tPessoa pessoa;

    for(i = 0; i < 10; i++){
        printf("Insira o sexo da pessoa #%d: ", i+1);
        scanf("%c", &pessoa.sexo[i]);
        printf("Insira a altura da pessoa #%d: ", i+1);
        scanf("%lf%*c", &pessoa.altura[i]);
    }

    for(i = 0; i < 10; i++){
        if(pessoa.altura[i] > maior){
            maior = pessoa.altura[i];
            sexo1 = i;
        }
        if(pessoa.altura[i] < menor){
            menor = pessoa.altura[i];
            sexo2 = i;
        }
        if(pessoa.sexo[i] == 'F'){
            mediaF += pessoa.altura[i];
            m++;
        }else{
            mediaH += pessoa.altura[i];
            h++;
        }
    }
    mediaF = mediaF/(double)m;
    mediaH = mediaH/(double)h;
    printf("Maior altura: %.2lf \tSexo: %c\n"
           "Menor altura: %.2lf \tSexo: %c\n", maior, pessoa.sexo[sexo1], menor, pessoa.sexo[sexo2]);
    printf("Media altura sexo M = %.2lf\n"
          "Media altura sexo F = %.2lf\n", mediaH, mediaF);
    printf("Total de H = %d\n"
           "Total de M = %d\n", h, m);

    return 0;
}
