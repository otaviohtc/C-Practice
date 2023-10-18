// Fazer um programa para encontrar todos os números pares entre 1 e 100

#include <stdlib.h>
#include <stdio.h>

int main(void){
    for (int i=1; i<=100; i++){
        if (i%2==0){
            printf("%d\n", i);
        }
    }
    return 0;
}