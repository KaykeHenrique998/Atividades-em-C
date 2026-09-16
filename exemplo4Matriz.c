#include <stdio.h>
int main()
{

    float notas[3][3] = {
        {7,8,7},
        {10,9,8},
        {1,2,3}

    };

    float calculo = 0;
    float  media;

    for(int i = 0; i < 3; i++){
        calculo = 0;
        media = 0;
        printf("\n Média do aluno %d: ", i+1);
        for(int j = 0; j < 3; j++ ){
            calculo = calculo + notas[i][j];
            
            
        }
        media = calculo / 3;
        printf("%.2f", media);
    
    }


    
    return 0;
}
