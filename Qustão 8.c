#include <stdio.h>

int main() {
    int num1_563, num2_563, num3_563;
    int *ptr1_563 = &num1_563;
    int *ptr2_563 = &num2_563;
    int *ptr3_563 = &num3_563;
    
    printf("Questão 8\n\n");
    printf("Olá, digite três aqui números: ");
    scanf("%d %d %d", ptr1_563, ptr2_563, ptr3_563);
    
    
    if (*ptr1_563 > *ptr2_563) {
        int temp563 = *ptr1_563;
        *ptr1_563 = *ptr2_563;
        *ptr2_563 = temp563;
    }
    
    if (*ptr2_563 > *ptr3_563) {
        int temp563 = *ptr2_563;
        *ptr2_563 = *ptr3_563;
        *ptr3_563 = temp563;
    }
    
    if (*ptr1_563 > *ptr2_563) {
        int temp563 = *ptr1_563;
        *ptr1_563 = *ptr2_563;
        *ptr2_563 = temp563;
    }
    
    
    printf("Números em ordem crescente: %d %d %d\n", *ptr1_563, *ptr2_563, *ptr3_563);
    printf("Endereços de memória dos números: %p %p %p\n", ptr1_563, ptr2_563, ptr3_563);
    
    return 0;
}
