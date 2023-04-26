int main() {
    
    float valorCompra, valorDesconto, valorFinal;
    
    printf("Informe o valor da compra: R$ ");
    scanf("%f", &valorCompra);

    if(valorCompra <= 5000) {
        valorDesconto = valorCompra * 0.12;
    } else if(valorCompra > 5000 && valorCompra <= 8000) {
        valorDesconto = valorCompra * 0.07;
    } else if(valorCompra > 8000 && valorCompra <= 10000) {
        valorDesconto = valorCompra * 0.04;
    } else {
        valorDesconto = valorCompra * 0.03;
    }

    valorFinal = valorCompra - valorDesconto;

    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Valor final a pagar: R$ %.2f\n", valorFinal);

    return 0;
}
