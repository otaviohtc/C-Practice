// Crie um programa em C que peça 10 números, calcule a sua média aritmética e apresente o valor em tela.

#include <stdlib.h>
#include <stdio.h>

int main(void){
    int numeros[10];
    int i;
    float soma = 0.0, media;

    printf("Digite 10 numeros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    media = soma / 10;
    printf("A media aritmetica dos numeros digitados e: %.2f\n", media);

    return 0;
}