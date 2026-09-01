#include <stdio.h>
int main()
{
    int numero; 
    printf("Escolha: 1 - alguma coisa, 2 - outra coisa, 3 - sair \n");
    scanf("%d",&numero);

    switch(numero){
        case 1:
            printf("Voce escolheu a opcao : alguma coisa\n ");
            break;
        
        case 2:
            printf("Voce escolheu a opcao: outra coisa\n");
            break;
        case 3:
            printf("Você escolheu a opção de sair\n" );
            break;

        default:
            printf("opcao invalida");
            break;
    }
    return 0;
}
