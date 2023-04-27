#include <stdio.h>

int main() {
    int numeros563[12];
    int pares563[6], impares563[6];
    int i_563, j_563 = 0, k_563 = 0;
    
    printf("Questão 7\n\n");
    printf("Digite doze números inteiros:\n");
    for (i_563 = 0; i_563 < 12; i_563++) {
        scanf("%d", &numeros563[i_563]);
        if (numeros563[i_563] % 2 == 0) {  
            pares563[j_563] = numeros563[i_563];
            j_563++;
        } else { 
            impares563[k_563] = numeros563[i_563];
            k_563++;
        }
    }
    
    printf("Números pares: ");
    for (i_563 = 0; i_563 < j_563; i_563++) {
        printf("%d ", pares563[i_563]);
    }
    printf("\nNúmeros ímpares: ");
    for (i_563 = 0; i_563 < k_563; i_563++) {
        printf("%d ", impares563[i_563]);
    }
    printf("\n");
    
    return 0;
}
