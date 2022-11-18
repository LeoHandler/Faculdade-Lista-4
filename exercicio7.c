#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float distancia2pontos(float x1, float y1, float x2, float y2, float distancia) {

    distancia = sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));

    printf("A distancia entre esses dois pontos no plano cartesiano e %.2f", distancia);

    return distancia;
}

int main (void){

float x1, x2, y1, y2, distancia;

    printf("Insira os valores do ponto 1: (Ordem: X, Y)");
    scanf("%f %f", &x1, &y1);

    printf("Insira os valores do ponto 2: (Ordem: X, Y)");
    scanf("%f %f", &x2, &y2);

    distancia2pontos(x1, y1, x2, y2, distancia);

return 0;
}
