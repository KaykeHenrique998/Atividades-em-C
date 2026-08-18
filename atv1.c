/******************************************************************************

Cálculo da área de um quadrado
Peça para o usuário digitar um número para base e um número para
altura.
Faça um cálculo de área usando esses valores.
Retorne na tela o valor dessa conta.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero =2 ;
    float base ;
    float altura;
    
    printf("Digite um número para base: ");
    scanf("%f", &base);
    
    printf("Digite um número para altura: ");
    scanf("%f", &altura);
    
    float resultado = base * altura;
    
    printf("O valor dessa conta é: %f",resultado);

    return 0;
}
