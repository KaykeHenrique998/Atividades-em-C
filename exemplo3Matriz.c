#include <stdio.h>
int main()
{

    int matriz[2][2];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++ ){
            printf("\n Insira o valor na linha %d, coluna %d: ",i ,j);
            scanf("d", &matriz[i][j]);
        }
    }

    printf("\n");
    for(int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++ ){
            printf("\n O valor na linha %d, coluna %d, é %d ",i ,j, matriz[i][j]);
        }
    }

    
    return 0;
}
