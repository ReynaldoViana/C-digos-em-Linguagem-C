#include <stdio.h>

float n1, dobro;

int main() {

    printf("Escolha um número: ");
    scanf("%f", &n1);

    dobro = n1 * 2;

    printf("O resultado será: %.2f\n", dobro);

    return 0;
}