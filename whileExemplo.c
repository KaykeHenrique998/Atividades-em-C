#include <stdio.h>
int main()
{
int i = 1;
int controle;

while(1){
    printf("Digite 0 para sair. Loop atual: %d \n", i);
    scanf("%d", &controle);
    if(controle == 0){
        break;
    }
}
return 0;
}
