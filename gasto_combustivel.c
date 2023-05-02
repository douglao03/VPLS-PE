#include<stdio.h>

int main(){

    float tempo, velocidade, distancia, litros;
    

    printf("Digite o tempo gasto e depois a velocidade media:\n");
    scanf("%f", &tempo);
    scanf("%f", &velocidade);

    distancia = tempo * velocidade;
    litros = distancia / 12;

    printf("%.4f", litros);

    return 0;
}