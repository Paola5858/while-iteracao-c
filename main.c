#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número positivo: ");
    scanf("%d", &numero);

    while (numero < 0) {  // Enquanto o número for negativo, continua pedindo
        printf("Número inválido! Digite um número positivo: ");
        scanf("%d", &numero);
    }

    printf("Número válido inserido: %d\n", numero);

    return 0;
}
