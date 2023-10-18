// Fazer um programa que pergunte para o usuário quantos números ele quer ler – Faça a leitura desses números e depois calcule a média aritmética simples dos números cadastrados.

#include <stdlib.h>
#include <stdio.h>

int main(void){
    int n;
    float media, num, total;
    total = 0;
    printf("How many numbers do you want to read? ");
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        printf("Type a number: \n");
        scanf("%f", &num);
        total = total + num;
    }
    media = total/n;
    printf("The mean of the typed numbers was %.2f", media);
    return 0;
}