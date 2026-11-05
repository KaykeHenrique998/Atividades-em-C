#include <stdio.h>
int main()
{
    int numeros[5];
    int maior = 0;

    for(int i = 0;i<5;i++){
        printf("Digite um número: ");
        scanf("%d", &numeros[i]);

        maior = numeros[i];
    }

    for(int i = 0; i<5; i++){
        if(numeros[i]>maior){
            maior = numeros[i];
        }
    }

    printf("O maior número é:  %d",maior );
    return 0;
}
