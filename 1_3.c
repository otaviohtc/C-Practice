// Escreva um programa que leia um número inteiro e mostre uma mensagem indicando se este número é par ou ímpar, e se é positivo ou negativo.

#include <stdlib.h>
#include <stdio.h>

int main(void){
    int n;
    printf("Type a number: ");
    scanf("%d", &n);
    if (n>0){
        if (n%2==0){
            printf("Your number is positive and even");
        }
        else {
            printf("Your number is positive and odd");
        }
    }
    else if (n<0){
        if (n%2==0){
            printf("Your number is negative and even");
        }
        else {
            printf("Your number is negative and odd");
        } 
    }
    else{
        printf("0 is not positive nor negative");
    }
    
    return 0;
}