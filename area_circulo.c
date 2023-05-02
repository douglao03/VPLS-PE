#include<stdio.h>

int main(){

float area, raio, pi = 3.14159;

printf("Digite o valor do raio:");
scanf("%f", &raio);

area = pi * (raio * raio);
printf("A = %.4f", area);

return 0;


}