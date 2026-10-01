#include <stdio.h>
int main()
{
  int idade = 15;
  int *p_idade = &idade;

  printf("Valor dentro da memória: %d", *p_idade);
  printf("\n Posição da memória: %p", p_idade);
}
