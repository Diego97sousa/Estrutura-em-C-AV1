#include <stdio.h>

int main() {
    
    int grades_563[10];
    int i_563, soma_563 = 0;
    int maior_563, menor_563;

         printf("Questão 3: \n\n ");
    for (i_563 = 0; i_563 < 10; i_563++) {
        printf("Digite a nota do aluno %d: ", i_563+1);
        scanf("%d", &grades_563[i]);
        soma_563 += grades_563[i_563];
    }


    float media_563 = (float) soma_563 / 10;


    maior_563 = grades_563[0];
    menor_563 = grades_563[0];
    for (i_563 = 1; i_563 < 10; i_563++) {
        if (grades_563[i] > maior_563) {
            maior_563 = grades_563[i];
        }
        if (grades_563[i_563] < menor_563) {
            menor_563 = grades_563[i_563];
        }
    }

    printf("soma total das notas: %d\n", soma_563);
    printf("média das notas: %.2f\n", media_563);
    printf("A maior nota: %d\n", maior_563);
    printf("A menor nota: %d\n", menor_563);

    return 0;
}

