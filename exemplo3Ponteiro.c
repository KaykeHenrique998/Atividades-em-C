#include <stdio.h>
int main()
{
  char palavra[10] = "Teste";
  char *p_palavra = palavra;
  

  printf("Posição da memória: ");
  printf("\nValor: %p",   &palavra[0]);
  printf("\nValor: %p", &palavra[1]);
  printf("\nValor: %p", &palavra[2]);
  printf("\nValor: %p", &palavra[3]);
  printf("\nValor: %p", &palavra[4]);

  
  printf("\nValor dentro da memória:");
  printf("\nValor: %c",   palavra[0]);
  printf("\nValor: %c", palavra[1]);
  printf("\nValor: %c", palavra[2]);
  printf("\nValor: %c", palavra[3]);
  printf("\nValor: %c", palavra[4]);
  

}
