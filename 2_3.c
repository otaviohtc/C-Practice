// Fazer um programa para encontrar todos os números ímpares entre 1 e 1000

#include <stdlib.h>
#include <stdio.h>

int main(void){
    for (int i=1; i<=1000; i++){
        if (i%2==1){
            printf("%d\n", i);
        }
    }
    return 0;
}