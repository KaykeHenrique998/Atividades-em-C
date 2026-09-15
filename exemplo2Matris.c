#include <stdio.h>
int main()
{
    int alunos_notas[3][3] = {
        {10, 9, 6},
        {5, 3, 8},
        {4, 8, 10}
    };

    for(int i = 0; i < 3; i ++){
        printf("Notas do aluno %d\n", i+1);
        
        for(int j= 0; j<3; j++){
        printf("Nota %d: %d \n", j+1, alunos_notas[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
