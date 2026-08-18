/******************************************************************************
Crie um script que exiba na tela o texto
'A melhor banda do mundo é [nome
da banda] e a melhor música é [nome da música]'.
O nome da banda e o nome da música devem estar declarados em duas
variáveis diferentes, e o usuário deve digitar seu valor

*******************************************************************************/
#include <stdio.h>

int main()
{
    char banda[20];
    char musica[20];

    
    printf("A melhor banda é: ");
    scanf("%s", &banda);
    
    printf("E a melhor musica dessa banda é: ");
    scanf("%s", &musica);
    
    
    printf("A melhor banda é %s, e a melhor música é: %s", banda, musica);

    return 0;
}
