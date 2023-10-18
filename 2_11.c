/* Fazer um programa que peça ao usuário um número entre 12 e 20. Se a pessoa digitar um número diferente, mostrar a mensagem "entrada inválida" e
solicitar o número novamente. Se digitar correto mostrar o número digitado. */

#include <stdlib.h>
#include <stdio.h>

int main(void){
    int n = 0;
    while (n<=12 || n>=20){
        printf("Type a number in between 12 and 20: ");
        scanf("%d", &n);
        if (n<=12 || n>=20){
            printf("Invalid\n");
        }
    }
    printf("You typed: %d", n);
    return 0;
}