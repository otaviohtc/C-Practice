// Escreva um programa usando função que recebe 4 notas, calcule a média aritmética e depois informe em tela a média e se o aluno foi ou não aprovado – para aprovação média >= 6.

#include <stdlib.h>
#include <stdio.h>

static float calcMedia(float n1, float n2, float n3, float n4);

int main(void){
    float a, b, c, d, media;

    printf("Digite 4 numeros: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    media = calcMedia(a, b, c, d);
    printf("Sua media foi de: %.2f", media);

    return 0;
}

static float calcMedia(float n1, float n2, float n3, float n4){
    return (n1 + n2 + n3 + n4)/4;
}