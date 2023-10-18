/* Elabore um programa que calcule o que deve ser pago por um produto, considerando o preço normal de etiqueta e a escolha da condição de pagamento. Utilize os códigos da
tabela a seguir para ler qual a condição de pagamento escolhida e efetuar o cálculo adequado. Código Condição de pagamento:
1 - À vista em dinheiro ou cheque, recebe 20% de desconto
2 - À vista no cartão de crédito, recebe 5% de desconto
3 - Em duas vezes, preço normal de etiqueta sem juros
4 - Em duas vezes, preço normal de etiqueta mais juros de 10% */

#include <stdlib.h>
#include <stdio.h>

int main(void){
    float p, desconto, juros;
    int n;
    printf("Product price: ");
    scanf("%f", &p);
    printf("Type of payment code: (1, 2, 3 or 4) ");
    scanf("%d", &n);
    switch (n){
        case 1:
            desconto = p - (p * 0.20);
            printf("You will pay one installment of $%.2f", desconto);
            break;
        case 2:
            desconto = p - (p * 0.05);
            printf("You will pay one installment of $%.2f", desconto);
            break;
        case 3:
            printf("You will pay two installments of $%.2f", p/2);
            break;
        case 4:
            juros = p + (p * 0.10);
            printf("You will pay two installments, the first $%.2f and the second $%.2f", p/2, juros/2);
            break;
        default:
            printf("Invalid type of payment code");
            break;
    }
    return 0;
}