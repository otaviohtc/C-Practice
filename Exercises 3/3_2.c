// Escreva um programa usando função que pergunte ao usuário quantas notas ele que digitar e depois calcule a soma das notas e a média aritmética

#include <stdlib.h>
#include <stdio.h>

static float calcMedia(float total, int n);

int main(void){
    int n;
    float media, num, total;
    total = 0;

    printf("Quantos numeros deseja ler? ");
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        printf("Digite um numero: \n");
        scanf("%f", &num);
        total = total + num;
    }

    media = calcMedia(total, n);
    printf("A media dos numeros digitados foi %.2f\n", media);
    printf("A soma dos numeros digitados foi %.2f", total);
    
    return 0;
}

static float calcMedia(float total, int n){
    return total/n;
}