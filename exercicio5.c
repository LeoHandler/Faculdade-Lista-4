#include<stdio.h>
#include<stdlib.h>


int main(void){

int n1, n2, n3, maior_valor;

    printf("Informe 3 valores: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    maior_numero (n1,n2,n3,maior_valor);

   return 0;
}

int maior_numero (int n1, int n2, int n3, int maior_valor){

    // encontrando o maior
    if(n1 > n2){
        if(n1 > n3)
            maior_valor = n1;
        else
            maior_valor = n3;
    }
    else{
        if(n2 > n3)
            maior_valor = n2;
        else
            maior_valor = n3;
    }

    printf("O maior valor entre os numeros inseridos e o numero: %d", maior_valor);

    return maior_valor;
}


