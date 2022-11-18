#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main (void){

    char linha_texto[300];
    int cont_a = 0, cont_e = 0, cont_i = 0, cont_o = 0, cont_u = 0;
    int i;

    printf("Insira uma linha de texto qualquer:\n");
    gets(linha_texto);

    for(i=0; i < strlen(linha_texto);i++){
        if (linha_texto[i] == 'a' || linha_texto[i] == 'A')
            cont_a = cont_a + 1;
    }

    for(i=0; i<strlen(linha_texto) ;i++){
    if (linha_texto[i] == 'e'|| linha_texto[i] == 'E')
            cont_e = cont_e + 1;
    }

    for(i=0; i<strlen(linha_texto) ;i++){
        if (linha_texto[i] == 'i'|| linha_texto[i] == 'I')
            cont_i = cont_i + 1;
    }

    for(i=0; i<strlen(linha_texto) ;i++){
        if (linha_texto[i] == 'o'|| linha_texto[i] == 'O')
            cont_o = cont_o + 1;
    }

    for(i=0; i<strlen(linha_texto) ;i++){
        if (linha_texto[i] == 'u'|| linha_texto[i] == 'U')
            cont_u = cont_u + 1;
    }


    printf("\nA quantidade de vogais 'a' usadas nesta linha de texto e de %d.", cont_a);
    printf("\nA quantidade de vogais 'e' usadas nesta linha de texto e de %d.", cont_e);
    printf("\nA quantidade de vogais 'i' usadas nesta linha de texto e de %d.", cont_i);
    printf("\nA quantidade de vogais 'o' usadas nesta linha de texto e de %d.", cont_o);
    printf("\nA quantidade de vogais 'u' usadas nesta linha de texto e de %d.", cont_u);

    getch( );
    return 0;
}