//soma dos 3 filhos é igual a idade dela
//imprimir a idade do filho mais velho

#include<stdio.h>

int main(){

	int monica, filho1, filho2, filho3;

	printf("Idade da Monica:\n");
	scanf("%d", &monica);
	printf("Idade filho1:\n");
	scanf("%d", &filho1);
	printf("Idade filho2:\n");
	scanf("%d", &filho2);

	filho3 = filho1 + filho2 - monica;
	filho3 = filho3 * (-1);

	printf("Idade do filho mais velho: %d", filho3);

	return 0;
}