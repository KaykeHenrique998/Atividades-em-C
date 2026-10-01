#include <stdio.h>

int soma(int a, int b){
    int resultado;
    resultado = a+b;

    return resultado; 
}
int main() {
    int calculo = soma(3,4);
    printf("%d", calculo);
    return 0;
}
