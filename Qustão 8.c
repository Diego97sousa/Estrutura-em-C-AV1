#include <stdio.h>

int main() {
    int num1, num2, num3;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    int *ptr3 = &num3;
    
    printf("Digite três números: ");
    scanf("%d %d %d", ptr1, ptr2, ptr3);
    
    
    if (*ptr1 > *ptr2) {
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }
    
    if (*ptr2 > *ptr3) {
        int temp = *ptr2;
        *ptr2 = *ptr3;
        *ptr3 = temp;
    }
    
    if (*ptr1 > *ptr2) {
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }
    
    
    printf("Números em ordem crescente: %d %d %d\n", *ptr1, *ptr2, *ptr3);
    printf("Endereços de memória dos números: %p %p %p\n", ptr1, ptr2, ptr3);
    
    return 0;
}

