#include <stdio.h>
int main()
{
int valor;
printf("Digite um valor: ");
scanf("%d", &valor);


while( valor > 0){
    printf("Loop atual: %d \n", valor);
    valor  = valor - 1;
}
return 0;
}
