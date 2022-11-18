//3)Implemente uma fun��o RaizQuadrada. Esta fun��o deve receber um n�mero do tipo float como par�metro e retornar o quadrado desse n�mero.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float raiz_quadrada (float num){

float raiz;

    raiz = sqrt(num);
    printf("O quadrado do numero %.2f e: %.2f", num, raiz);

return num;
}

int main (){

float num;

    printf("Digite um numero: ");
    scanf("%f", &num);

    raiz_quadrada(num);

}
