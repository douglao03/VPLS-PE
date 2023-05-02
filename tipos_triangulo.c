#include<stdio.h>

//ordenação decrescente de 3 valores inteiros

int main(){

    int a, b, c;

    printf("Digite os valores dos lados respectivamente:\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a == b && b == c){
        printf("TRIANGULO EQUILATERO");
    }
    else{

        if(a > b){
            if(b > c){
                printf("%d %d %d", a, b, c);
            }
            else{
                if(a > c){
                    printf("%d %d %d", a, c, b);
                }
                else {
                    printf("%d %d %d", c, a, b);
                }
            }
        }
        else{
            if(a > c){
                printf("%d %d %d", b, a ,c);
            }
            else{
                if(c > b){
                    printf("%d %d %d", c, b, a);
                }
                else{
                printf("%d %d %d", b, c, a);
                }
            }    
        }
    }
    

    
    
    
    
    
    
    
    
    
    
    return 0;
}
