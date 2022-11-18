#include<stdio.h>
#include<stdlib.h>

int main() {

int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    imprime_resultado(num);

  return 0;
}

int imprime_resultado (int num){

    if(num >= 0){
        printf("O numero %d e positivo", num);
    } else {
        printf("O numero %d e negativo", num);
        }
return num;
}