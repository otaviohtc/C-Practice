// Escreva um programa que leia um número inteiro e mostre uma mensagem indicando se este número é par ou ímpar

#include <stdlib.h>
#include <stdio.h>

int main(void){
    int n;
    printf("Type a number: ");
    scanf("%d", &n);
    if (n%2==0){
        printf("Your number is even");
    }
    else {
        printf("Your number is odd");
    }

    return 0;
}