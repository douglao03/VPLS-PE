#include<stdio.h>
#include<ctype.h>

int main(){

//transforma todas as letras minusculas em maiusculas 

    char palavra[30];
    int i = 0;
    char palavrinha;

    gets(palavra);

    while(palavra[i]){
        palavrinha = palavra[i];
        //printf("%c", toupper(palavra));
        putchar(toupper(palavrinha));
        i++;
    }

    return 0;
    
}