// Escreva um programa usando função que calcule uma equação do segundo grau completa

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

static float equacaoSeg(float A, float B, float C);

int main(void){
    float A, B, C;
    printf("Digite A, B e C: ");
    scanf("%f %f %f", &A, &B, &C);

    equacaoSeg(A, B, C);

    return 0;
}

static float equacaoSeg(float A, float B, float C){
    float X1, X2, delta;
    delta = B * B - 4 * A * C;
    X1 = (-B + sqrt(delta)) / (2 * A);
    X2 = (-B - sqrt(delta)) / (2 * A);

    if (delta<0){
        printf("Essa equacao nao possui raizes reais\n");
    }
    else {
        printf("X1 = %.2f\n", X1);
        printf("X2 = %.2f\n", X2);
    }
}