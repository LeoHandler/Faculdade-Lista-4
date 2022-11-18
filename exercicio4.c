
#include<stdio.h>
#include<stdlib.h>

int conversao (float celsius, float fahrenheit) {

fahrenheit = (celsius * (9.0 / 5.0)) + 32.0;

  printf("A temperatura %.2f convertida para celsius é igual a: %.2f", celsius, fahrenheit);
  return fahrenheit;
}

int main (){

float celsius, fahrenheit;

    printf("Digite a temperatura em graus celsius: ");
    scanf("%f", &celsius);

    conversao(celsius, fahrenheit);

    return 0;
}
