#include <stdio.h>

int main(){

/*
- Calculadora de imc (índice de massa corpórea)
- Etapas:
1. lançar os dados que desejo obter (peso, altura)
2. IMC= peso / (altura * altura)
3. Imprimir o valor do imc
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


