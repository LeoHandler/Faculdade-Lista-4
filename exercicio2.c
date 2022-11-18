#include <stdio.h>
#include <stdlib.h>

int raizes(float a, float b, float c, float delta, float raiz1, float raiz2){

    delta = b*b - 4 * a * c;

    if(delta < 0) {
        printf("Não existe raiz.");
    } else if (delta == 0) {
        raiz1 = (-b + sqrt(delta))/(2*a);
        printf("Possui uma raiz: %.2f", raiz1);
    } else {
        raiz1 = (-b + sqrt(delta))/(2*a);
        raiz2 = (-b - sqrt(delta))/(2*a);
        printf("Possui as raizes: %.2f %.2f", raiz1, raiz2);
    }
 return (delta);
}

int main (void){

float a, b, c, raiz1, raiz2, delta;

    printf("Digite os valores: (A, B, C)");
    scanf("%f %f %f", &a, &b, &c);

    raizes(a, b, c, delta, raiz1, raiz2);

return 0;
}


