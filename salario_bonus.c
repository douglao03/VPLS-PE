#include<stdio.h>

int main(){

    int nome;
    double salario, vendas, total;

    printf("Nome:\n");
    scanf("%s", &nome);
    printf("Salario Fixo:\n");
    scanf("%lf", &salario);
    printf("Vendas:\n");
    scanf("%lf", &vendas);

    total = salario + (vendas*0.15);

    printf("TOTAL = R$%.2lf", total);
    
    return 0;


}