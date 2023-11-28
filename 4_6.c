/* Escreve um programa que sorteio, aleatoriamente, 10 números e armazene estes em um vetor. Em seguida, o usuário digita um número e seu programa em C deve acusar 
se o número digitado está no vetor ou não. Se estiver, diga a posição que está. */ 

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define TAMANHO 10

int main(void){
    int vetor[TAMANHO];
    int i, numeroBusca, encontrado = 0, posicao = -1;

    srand(time(NULL));
    printf("Numeros sorteados no vetor: ");

    for (i = 0; i < TAMANHO; i++) {
        vetor[i] = rand() % 100;
        printf("%d ", vetor[i]);
    }

    printf("\n");
    printf("Digite um numero para procurar no vetor: ");
    scanf("%d", &numeroBusca);

    for (i = 0; i < TAMANHO; i++) {
        if (vetor[i] == numeroBusca) {
            encontrado = 1;
            posicao = i + 1;
            break;
        }
    }
    if (encontrado) {
        printf("O numero %d esta presente no vetor na posicao %d.\n", numeroBusca, posicao);
    } else {
        printf("O numero %d nao esta presente no vetor.\n", numeroBusca);
    }

    return 0;
}