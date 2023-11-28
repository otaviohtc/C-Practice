// Crie um aplicativo em C que peça um número inicial ao usuário, uma razão e calcule os termos de uma P.A (Progressão Aritmética), armazenando esses valores em um vetor de tamanho 10.

#include <stdlib.h>
#include <stdio.h>

int main(void){
    int pa[10];
    int numeroInicial, razao, i;

    printf("Digite o numero inicial da Progressão Aritmetica: ");
    scanf("%d", &numeroInicial);

    printf("Digite a razao da Progressão Aritmetica: ");
    scanf("%d", &razao);

    pa[0] = numeroInicial;
    printf("Os termos da Progressão Aritmetica sao:\n");

    for (i = 1; i < 10; i++) {
        pa[i] = pa[i - 1] + razao;
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", pa[i]);
    }

    printf("\n");

    return 0;
}