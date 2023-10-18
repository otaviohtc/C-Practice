// Escreva um algoritmo que leia um número do teclado até que encontre um número menor ou igual a 1

#include <stdlib.h>
#include <stdio.h>

int main(void){
    int n;
    while (n>1){
        printf("Type a number equal or lower than 1: ");
        scanf("%d", &n);
    }
    return 0;
}