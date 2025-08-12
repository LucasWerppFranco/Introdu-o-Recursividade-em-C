#include <stdio.h>
int soma(int n) {
    if (n == 0 || n == 1) {
        return 1; 
    } else {
        return n + soma(n - 1); 
    }
}
int main() {
    int numero = 4;
    printf("Soma de %d = %d\n", numero, soma(numero));
    return 0;
}