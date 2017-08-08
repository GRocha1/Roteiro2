#include <stdio.h>
#include <stdlib.h>

int Converte(int *h, int *m){

	if(*h > 12){
        *h = *h - 12;
        printf("Hora atual: %02d : ", *h);
        if(*m > 10){
        printf("%dPM\n", *m);
        }else{
        printf("%02dPM\n", *m);
        }
	}else if(*h == 12){
        printf("Hora atual: %d : ", *h);
        if(*m > 10){
        printf("%dPM\n", *m);
        }else{
        printf("%02dPM\n", *m);
        }
	}else if(*h == 0){
        *h = 12;
        printf("Hora atual: %d : ", *h);
        if(*m > 10){
        printf("%dAM\n", *m);
        }else{
        printf("%02dAM\n", *m);
        }
	}else if(*h < 12){
        printf("Hora atual: %d : ", *h);
        if(*m > 10){
        printf("%dAM\n", *m);
        }else{
        printf("%02dAM\n", *m);
        }
	}

return -1;
}

int main(){

int hora, minutos;

	printf("Digite a hora e os minutos separados por espaco (10 59): ");
	scanf("%d %d", &hora, &minutos);
	if(hora > 24){
	printf("Hora invalida\n");
    return -2;
	}
	Converte(&hora, &minutos);

return 0;
}
