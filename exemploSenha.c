#include <stdio.h>
#include <string.h>
int main()
{
    char nome1[] = "1234";
    char nome2[7] ;
    printf("digite a senha: ");
    scanf("%s", &nome2);

    if (strcmp(nome1, nome2)==0) {
       printf("Senha correta!!!") ;
    }else{
        printf("Senha incorreta");
    }


}
