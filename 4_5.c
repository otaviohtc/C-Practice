// Crie um aplicativo em C que peça um número inicial ao usuário, uma razão e calcule os termos de uma P.G (Progressão Geométrica), armazenando esses valores em um vetor de tamanho 10.

#include <stdlib.h>
#include <stdio.h>

int main(void){
    int pg[10];
    int numeroInicial, razao, i;

    printf("Digite o numero inicial da Progressão Geometrica: ");
    scanf("%d", &numeroInicial);

    printf("Digite a razao da Progressão Geometrica: ");
    scanf("%d", &razao);

    pg[0] = numeroInicial;
    printf("Os termos da Progressão Geometrica sao:\n");

    for (i = 1; i < 10; i++) {
        pg[i] = pg[i - 1] * razao;
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", pg[i]);
    }
    
    printf("\n");
    
    return 0;
}