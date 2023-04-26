#include <stdio.h>

int main() {
    int numeros[12];
    int pares[6], impares[6];
    int i, j = 0, k = 0;
    
    printf("Digite doze números inteiros:\n");
    for (i = 0; i < 12; i++) {
        scanf("%d", &numeros[i]);
        if (numeros[i] % 2 == 0) {  
            pares[j] = numeros[i];
            j++;
        } else { 
            impares[k] = numeros[i];
            k++;
        }
    }
    
    printf("Números pares: ");
    for (i = 0; i < j; i++) {
        printf("%d ", pares[i]);
    }
    printf("\nNúmeros ímpares: ");
    for (i = 0; i < k; i++) {
        printf("%d ", impares[i]);
    }
    printf("\n");
    
    return 0;
}

