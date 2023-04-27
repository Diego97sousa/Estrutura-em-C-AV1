#include <stdio.h>

void menor_maior563(int notas563[], int tamanho563, int *menor563, int *maior563) {
    int i_563;
    
    *menor563 = notas563[0];
    *maior563 = notas563[0];
    
    for (i_563 = 1; i_563 < tamanho563; i_563++) {
        if (notas563[i_563] < *menor563) {
            *menor563 = notas563[i_563];
        }
        if (notas563[i_563] > *maior563) {
            *maior563 = notas563[i_563];
        }
    }
}

int main() {
    int notas563[4];
    int i_563, menor563, maior563;
    
    printf("Questão 6\n\n");
    printf("Digite as notas dos quatro alunos:\n");
    for (i_563 = 0; i_563 < 4; i_563++) {
        scanf("%d", &notas563[i_563]);
    }
    
    menor_maior563(notas563, 4, &menor563, &maior563);
    
    printf("Menor nota: %d\n", menor563);
    printf("Maior nota: %d\n", maior563);
    
    return 0;
}


