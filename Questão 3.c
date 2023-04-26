#include <stdio.h>

int main() {
    
    int grades[10];
    int i, soma = 0;
    int maior, menor;

         printf("Questão 4: \n\n ");
    for (i = 0; i < 10; i++) {
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%d", &grades[i]);
        soma += grades[i];
    }


    float media = (float) soma / 10;


    maior = grades[0];
    menor = grades[0];
    for (i = 1; i < 10; i++) {
        if (grades[i] > maior) {
            maior = grades[i];
        }
        if (grades[i] < menor) {
            menor = grades[i];
        }
    }

    printf("Soma total das notas: %d\n", soma);
    printf("Media das notas: %.2f\n", media);
    printf("Maior nota: %d\n", maior);
    printf("Menor nota: %d\n", menor);

    return 0;
}

