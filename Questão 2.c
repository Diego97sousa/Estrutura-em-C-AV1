#include <stdio.h>

int main() {
    
    int number_563;
    
    printf("Questão 2\n\n");
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &number_563);

    if (number_563< 1) {
        printf("O numero maior ou igual a 1.\n");
    } else {
        printf("Números impares menores ou iguais a %d e maiores ou iguais a 1:\n", number_563);
        for (int i = 1; i <= number_563; i += 2) {
            printf("%d\n", i);
        }
    }
    return 0;
}
