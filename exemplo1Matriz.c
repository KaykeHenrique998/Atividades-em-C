#include <stdio.h>
int main()
{
    int alunos_notas[5][3];
    alunos_notas[0][0] = 10 ;
    alunos_notas[0][1] = 8 ;
    alunos_notas[0][3] = 7 ;

    alunos_notas[1][0] = 6 ;
    alunos_notas[1][1] = 2;
    alunos_notas[1][2] = 9 ;

    printf("Primeira nota do alunlo 1: %d \n",alunos_notas[0][0]);
    printf("Segunda nota do alunlo 1: %d \n",alunos_notas[0][1]);
    printf("Terceira nota do alunlo 1: %d \n",alunos_notas[0][3]);
    
    return 0;
}
