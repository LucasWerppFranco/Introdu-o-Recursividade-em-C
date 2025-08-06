// Exercício 2: Solicite um número n e exiba os n primeiros termos da sequência de Fibonacci.
#include <stdio.h>

// Função recursiva de Fibonacci
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n, i;

    // Entrada do usuário
    printf("Digite quantos termos da sequência de Fibonacci deseja ver: ");
    scanf("%d", &n);

    // Impressão dos termos da sequência
    printf("Sequência de Fibonacci (%d primeiros):\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
