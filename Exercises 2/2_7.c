// Fazer um programa que receba um número inteiro e positivo, e diga se esse número é primo ou não. Obs: Um número é primo somente quando for divisível por 1 e por ele mesmo.

#include <stdlib.h>
#include <stdio.h>

int main(void){
    int n, f = 1;
    printf("Type a positive integral number: ");
    scanf("%d", &n);
    if (n<=1){
        printf("The number you typed was invalid");
        return 0;
    }
    for (int i=2; i<=n/2; i++){
        if (n%i==0){
            f = 0;
            break;
        }
    }
    if (f){
        printf("The number %d is a prime number\n", n);
    }
    else {
        printf("The number %d is not a prime number\n", n);
    }
    return 0;
}