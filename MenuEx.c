#include <stdio.h>
int main()
{
int valor1;
int valor2;
int i = 1;
int controle;
    
while(1){
    printf("1- Soma  \n 2 - Subtração \n 3 - Sair . \n " );
    scanf("%d", &controle);

    if(controle == 1){
        printf("Digite o número 1 e o número 2 para a soma: ");
        scanf("%d", &valor1);
        scanf("%d", &valor2);

        int soma = valor1 + valor2;

        printf("Seu resultado é: %d \n\n", soma);
        
    }

    if(controle == 2){
        printf("Digite o número 1 e o número 2 para a Subtração");
        scanf("%d", &valor1);
        scanf("%d", &valor2);

        int sub = valor1 - valor2;

        printf("Seu resultado é: %d \n\n", sub);
    }
    
    if(controle == 3){
        break;
    }
    i= i + 1;
}
return 0;
}
