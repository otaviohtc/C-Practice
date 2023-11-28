// Crie um programa em C que peça 10 números, armazene eles em um vetor e diga qual elemento é o maior, e seu valor.

#include <stdlib.h>
#include <stdio.h>

int main(void){
    int numeros[10];
    int i, maior, posicao;

    printf("Digite 10 numeros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    maior = numeros[0];
    posicao = 0;
    for (i = 1; i < 10; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
            posicao = i;
        }
    }
    
    printf("O maior elemento e: %d, na posicao %d\n", maior, posicao + 1);

    return 0;
}