#include<stdio.h>
#include<stdlib.h>


int main(void){

int n1, n2, n3, menor_valor;

    printf("Informe 3 valores: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    maior_numero (n1,n2,n3,menor_valor);

   return 0;
}

int maior_numero (int n1, int n2, int n3, int menor_valor){

    if(n1 < n2){
        if(n1 < n3)
            menor_valor = n1;
        else
            menor_valor = n3;
    }
    else{
        if(n2 < n3)
            menor_valor = n2;
        else
            menor_valor = n3;
    }

    printf("O menor valor entre os numeros inseridos e o numero: %d", menor_valor);

    return menor_valor;
}


