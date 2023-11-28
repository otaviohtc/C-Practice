// Fazer um programa que leia a altura de 15 pessoas e mostre em tela a maior altura e a menor altura digitada

#include <stdlib.h> 
#include <stdio.h>

int main(void){
    int a[15], i, max, min; 
    for (i=0; i<15; i++){ 
        printf("Type the height of the %d person: ", i+1); 
        scanf("%d", &a[i]);
    } 
    max = a[0]; 
    min = a[0]; 
    for (i=1; i<=15; i++){ 
        if (a[i]>max){ 
            max = a[i];
        } 
        if(a[i]<min){
            min = a[i];
        }
    } 
    printf("\n"); 
    printf("The shortest person measured in %dcm of height\n", min);
    printf("The tallest person measured in %dcm of height", max);
    return 0; 
}