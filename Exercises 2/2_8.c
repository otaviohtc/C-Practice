// Faça um programa que faça a leitura de 15 salários e verifique qual a porcentagem desses 15 salários lidos tem valor acima de 1500

#include <stdlib.h>
#include <stdio.h>

int main(void){
    float sal, perc, count = 0, total = 0;
    for (int i=1; i<=15; i++){
        printf("Type a salary: ");
        scanf("%f", &sal);
        if (sal>1500){
            count++;
        }
        total++;
    }
    perc = (count/total)*100;
    printf("Of a total of %.0f salarys, %.0f are worth more than $1500, i.e., %.2f percent", total, count, perc);
    return 0;
}