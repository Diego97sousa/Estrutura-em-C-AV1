#include <stdio.h>

int dobra563(int number563) {
    return number563 * 2;
}

int soma563(int number1_563, int number2_563) {
    return number1_563 + number2_563;
}

int triplica563(int number563) {
    return number563 * 3;
}

int main() {
    int number1_563, number2_563;
    int res_dobro1_563, res_dobro2_563, res_soma563, res_triplica563;

    printf("Questão 4\n\n");
    printf("Digite aqui o primeiro número: ");
    scanf("%d", &number1_563);

    printf("Digite aqui o segundo número: ");
    scanf("%d", &number2_563);

    res_dobro1_563 = dobra563(number1_563);
    res_dobro2_563 = dobra563(number2_563);
    res_soma563 = soma563(res_dobro1_563, res_dobro2_563);
    res_triplica563 = triplica563(res_soma563);

    printf("O dobro de %d é %d e o dobro de %d é %d\n", number1_563, res_dobro1_563, number2_563, res_dobro2_563);
    printf("A soma dos dobros é %d e o triplo desse valor é %d\n", res_soma563, res_triplica563);

    return 0;
}
