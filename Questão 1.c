#include <stdio.h>

int main() {
    
    float valor_compra_7563, valor_desconto_7563, valor_final_7563;
    
    printf("Questão 1");
    printf("Olá, informe o valor da compra aqui: R$ ");
    scanf("%f", &valor_compra_7563);

    if(valor_compra_7563 <= 5000) {
        valor_desconto_7563 = valor_compra_7563 * 0.12;
    } else if(valor_compra_7563 > 5000 && valor_compra_7563 <= 8000) {
        valor_desconto_7563 = valor_compra_7563 * 0.07;
    } else if(valor_compra_7563 > 8000 && valor_compra_7563 <= 10000) {
        valor_desconto_7563 = valor_compra_7563 * 0.04;
    } else {
        valor_desconto_7563 = valor_compra_7563 * 0.03;
    }

    valor_final_7563 = valor_compra_7563 - valor_desconto_7563;

    printf("Valor do desconto: R$ %.2f\n", valor_desconto_7563);
    printf("Valor final a pagar: R$ %.2f\n", valor_final_7563);

    return 0;
}
