#include <stdio.h>

int main(){

/*
Criando uma calcuuladora de imc (índice de massa corpórea)
1. lançar os dados que desejo obter (peso, altura)
2. IMC= peso / (altura * altura)
*/

float peso;
float altura;
float imc;


printf("Digite seu peso: %2.f\n");
scanf("%f", &peso);

printf("Digite sua altura: %.2f\n");
scanf("%f", &altura);

imc= peso / (altura * altura);

printf("Seu IMC é: %.2f\n", imc);


return 0;


}

