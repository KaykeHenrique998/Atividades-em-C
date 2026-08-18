/******************************************************************************

Cálculo de média
Peça para o usuário digitar três notas.
Faça um cálculo de média dessas notas.
Mostre na tela o resultado

*******************************************************************************/
#include <stdio.h>

int main()
{
    float n1;
    float n2;
    float n3;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    
    float media = n1 + n2 + n3/3;
    
    printf("O valor dessa conta é: %f",media);

    return 0;
}
