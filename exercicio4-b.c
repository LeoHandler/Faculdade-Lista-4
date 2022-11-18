
#include<stdio.h>
#include<stdlib.h>

int conversao (float celsius, float fahrenheit){

celsius = ((5*(fahrenheit-32))/9);

  printf("A temperatura %.2f convertida para fahrenheit é igual a: %.2f", fahrenheit, celsius);

  return celsius;
}

int main (){

float celsius, fahrenheit;

    printf("Digite a temperatura em graus fahrenheit: ");
    scanf("%f", &fahrenheit);

    conversao(celsius, fahrenheit);

    return 0;
}
