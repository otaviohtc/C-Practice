// Fazer um programa que receba 10 números e conte quantos deles estão no intervalo [10,15] e quantos deles estão fora do intervalo, escrevendo estas informações.

#include <stdlib.h>
#include <stdio.h>

int main(void){
    int n_in, n_out, n;
    n_in = 0;
    n_out = 0;
    for (int i=0; i<10; i++){
        printf("Type a number: ");
        scanf("%d", &n);
        if (n>=10 && n<=15){
            n_in++;
        }
        else {
            n_out++;
        }
    }
    printf("Numbers inside the interval: %d\n", n_in);
    printf("Numbers outside the interval: %d", n_out);
    return 0;
}