// Faça um programa que Leia A, B e C de uma equação de segundo grau e calcular as raízes, se existirem.

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void){
    float A, B, C, X1, X2, delta;
    printf("Type A, B and C: ");
    scanf("%f %f %f", &A, &B, &C);

    delta = B * B - 4 * A * C;
    X1 = (-B + sqrt(delta)) / (2 * A);
    X2 = (-B - sqrt(delta)) / (2 * A);

    if (delta<0){
        printf("This equation has no real roots\n");
    }
    else {
        printf("X1 = %.2f\n", X1);
        printf("X2 = %.2f\n", X2);
    }

    return 0;
}