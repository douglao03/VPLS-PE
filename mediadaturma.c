#include<stdio.h>
#DEFINE k = 100

int main(){

    int n;
    float notas[k];
    printf("Digite o numero de notas:\n");
    scanf("%d", n);

    for(int i = 0;i < n; i++){
        scanf("%d", notas[k]);
        printf("%d", notas[k]/n);
    }

    return 0;
}