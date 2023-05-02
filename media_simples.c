#include<stdio.h>

int main(){

    float media = 0, val1, val2;

    printf("Digite o valor 1 e depois o valor 2:\n");
    scanf("%f", &val1);
    scanf("%f", &val2);

    media = ((val1*3.5) + (val2*7.5))/(val1 + val2);

    printf("MEDIA = %.4f", media);

    return  0;

}