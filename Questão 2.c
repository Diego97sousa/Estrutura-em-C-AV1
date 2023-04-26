#include <stdio.h>

int main() {
    
    int num;
    
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    if (num < 1) {
        printf("O numero deve ser maior ou igual a 1.\n");
    } else {
        printf("Numeros impares menores ou iguais a %d e maiores ou iguais a 1:\n", num);
        for (int i = 1; i <= num; i += 2) {
            printf("%d\n", i);
        }
    }
    return 0;
}
