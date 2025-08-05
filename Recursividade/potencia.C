#include <stdio.h>

int potencia(int base, int expoente);

//Main

int main() {
  int base, expoente;

  printf("Adicione um valor -> ");
  scanf("%d", &base);

  printf("\nDigite o expoente -> ");
  scanf("%d", &expoente);

  int resultado = potencia(base, expoente);
  printf("\nresultado: %d\n", resultado);

  return 0;
}

// Potência

int potencia(int base, int expoente) {
    if (expoente == 0) return 1;
    return base * potencia(base, expoente - 1);
}
