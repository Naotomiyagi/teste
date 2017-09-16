#include<stdio.h>

int main() {
  unsigned short int A, B, Soma;
  printf("Tamanho da variaveis int = %d\n\n", sizeof(unsigned short int));
  printf("Digite A: ");
  scanf("%hu", &A);
  printf("Digite B: ");
  scanf("%hu", &B);
  Soma = A + B;
  printf("Soma de %hu com %hu = %hu", A, B, Soma);
  printf("mudo");
}
