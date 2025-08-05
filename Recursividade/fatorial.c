#include <stdio.h>
 
int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // caso base
    } else {
        return n * fatorial(n - 1); // chamada recursiva
    }
}
 
int main() {
    int numero;
   
    // Solicita entrada do usuário
    printf("Calculadora de Fatorial\n");
    printf("Digite um numero inteiro nao negativo: ");
   
    // Verifica se a entrada é válida
    if (scanf("%d", &numero) != 1) {
        printf("Erro: Entrada invalida. Por favor, insira um numero inteiro.\n");
        return 1;
    }
   
    // Verifica se o número não é negativo
    if (numero < 0) {
        printf("Erro: Fatorial nao esta definido para numeros negativos.\n");
        return 1;
    }
   
    // Calcula e exibe o resultado
    printf("Fatorial de %d = %d\n", numero, fatorial(numero));
   
    return 0;
}