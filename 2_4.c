// Fazer um programa que leia um valor inteiro (aceitar somente valores entre 1 e 10) e escrever a tabuada de 1 a 10 do valor lido.

#include <stdlib.h>
#include <stdio.h>

int main(void){
    int n;
    printf("Type a valor between 1 and 10: ");
    scanf("%d", &n);
    if (n<=0 || n>10){
        return 0;
    }
    for (int i=1; i<=10; i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}