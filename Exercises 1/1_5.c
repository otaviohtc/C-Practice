// Faça um programa que leia três números inteiros e mostre o maior e o menor deles

#include <stdlib.h>
#include <stdio.h>

int main(void){
    int a, b, c, maior, menor;
    printf("Type 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    maior = a;
    menor = a;
    if(menor>b){
        menor=b;
    }
    else if(maior<b){
        maior=b;
    }
    if(menor>c){
        menor=c;
    }
    else if(maior<c){
        maior=c;
    }
    printf("The largest number is %d\n", maior);
    printf("The smallest number is %d", menor);

    return 0;
}