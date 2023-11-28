// - Faça um programa que leia o nome, o sexo e o estado civil de uma pessoa. Caso sexo seja “F” e estado civil seja “CASADA”, solicitar o tempo de casada (anos).

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void){
    char nome[50];
    char sexo[50];
    char esciv[50];
    int y;
    printf("Type your name: ");
    scanf("%s", nome);
    printf("Type your gender: (M, F) ");
    scanf("%s", sexo);
    printf("Type your civil state: (SOLTEIRO, CASADO, SOLTEIRA, CASADA) ");
    scanf("%s", esciv);
    printf("\n");

    if (strcmp(sexo, "F")==0 && strcmp(esciv, "CASADA")==0){
        printf("How many years since have you been married? ");
        scanf("%d", &y);
        printf("You've been married for: %d years\n", y);
    }

    printf("Your name is: %s\n", nome);
    printf("Your gender is: %s\n", sexo);
    printf("Your civil state is: %s\n", esciv);

    return 0;
}