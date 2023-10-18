/* Faça um programa que leia dois valores inteiros A e B se os valores forem iguais deverá se somar os dois, caso contrário multiplique A por B. Ao final de qualquer um dos
cálculos deve-se atribuir o resultado para uma variável C e mostrar seu conteúdo na tela. */

#include <stdlib.h>
#include <stdio.h>

int main(void){
    float A, B, C;
    printf("Type 2 numbers: ");
    scanf("%f %f", &A, &B);
    if (A==B){
        C = A + B;
        printf("C is %.2f", C);
    }
    else{
        C = (A * B);
        printf("C is %.2f", C);
    }

    return 0;
}