#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main (void){

    char letras[100];
    int cont_letras = 0;
    int i;

    printf("Insira um nome: ");
    printf(" ");
    gets(letras);

    for(i=0; i < strlen(letras);i++){
       cont_letras = cont_letras + 1;
    }

    printf("\nA quantidade de letras no nome inserido e de %d.", cont_letras);

    getch( );
    return 0;
}
