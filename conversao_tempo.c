#include<stdio.h>

int main(){

    int segundos, minutos, horas;

    printf("Digite o tempo em segundos:\n");
    scanf("%d", &segundos);
    horas = segundos /3600;
    minutos = (segundos%3600) /60;
    
    segundos = (segundos%3600) %60;
    printf("%d:%d:%d", horas, minutos, segundos);

    return 0;


}