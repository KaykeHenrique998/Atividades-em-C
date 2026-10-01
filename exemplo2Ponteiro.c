#include <stdio.h>
int main()
{

  int n1;
  int n2;
  int soma;
  int *p_soma = &soma;

  printf("Digite o primeiro numero: ");
  scanf("%d", &n1);

  printf("digite o segundo numero: ");
  scanf("%d", &n2);

  soma = n1 + n2;

  printf("A soma dos números inseridos é: %d", soma);
  printf("\n Posição na memória: %p", &soma );
  


}
