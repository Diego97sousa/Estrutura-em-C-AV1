#include <stdio.h>

int maiorIdade563(int a563, int b563, int c563);
int menorIdade563(int a563, int b563, int c563);

int main() {
    int idade1_563, idade2_563, idade3_563;
    int  maior563, menor563;

    printf("Questão 5\n\n");
    printf("Digite a idade da primeira pessoa: ");
    scanf("%d", &idade1_563);

    printf("Digite a idade da segunda pessoa: ");
    scanf("%d", &idade2_563);

    printf("Digite a idade da terceira pessoa: ");
    scanf("%d", &idade3_563);

    maior563 = maiorIdade563(idade1_563, idade2_563, idade3_563);
    menor563 = menorIdade563(idade1_563, idade2_563, idade3_563);

    printf("A maior idade é: %d\n", maior563);
    printf("A menor idade é: %d\n", menor563);

    return 0;
}

int maiorIdade563(int a563, int b563, int c563) {
    int maior563;

    if (a563 > b563 && a563 > c563) {
        maior563 = a563;
    } else if (b563 > a563 && b563 > c563) {
        maior563 = b563;
    } else {
        maior563 = c563;
    }

    return maior563;
}

int menorIdade563(int a563, int b563, int c563) {
    int menor563;

    if (a563 < b563 && a563 < c563) {
        menor563 = a563;
    } else if (b563 < a563 && b563 < c563) {
        menor563 = b563;
    } else {
        menor563 = c563;
    }

    return menor563;
}


