#include<stdio.h>

int main(){
	
	int numero;

	printf("Digite o numero:\n");
	scanf("%d", &numero);

	if (numero % 2 == 0){
		printf("par");
	}
	else{
		printf("ímpar");
	}
	return 0;
}