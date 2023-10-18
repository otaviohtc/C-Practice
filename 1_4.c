/* Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo, conforme a tabela (1_4.png). Faça um programa que leia o salário e o
código do cargo de um funcionário e calcule o seu novo salário. Se o cargo do funcionário não estiver na tabela, ele deverá, então, receber 15% de aumento. Mostre o salário
antigo, o novo salário e a diferença entre ambos. */

#include <stdlib.h>
#include <stdio.h>

int main(void){
    int n;
    float sal, newsal;
    printf("Type your code: ");
    scanf("%d", &n);
    printf("Type your salary: ");
    scanf("%f", &sal);
    switch (n){
        case 310:
            printf("Your old salary was $%.2f\n", sal);
            newsal = sal + (sal*0.05);
            printf("Your new salary is $%.2f\n", newsal);
            printf("You received a raise of $%.2f", newsal - sal);
            break;
        case 456:
            printf("Your old salary was $%.2f\n", sal);
            newsal = sal + (sal*0.075);
            printf("Your new salary is $%.2f\n", newsal);
            printf("You received a raise of $%.2f", newsal - sal);
            break;
        case 885:
            printf("Your old salary was $%.2f\n", sal);
            newsal = sal + (sal*0.10);
            printf("Your new salary is $%.2f\n", newsal);
            printf("You received a raise of $%.2f", newsal - sal);
            break;
        default:
            printf("Your old salary was $%.2f\n", sal);
            newsal = sal + (sal*0.15);
            printf("Your new salary is $%.2f\n", newsal);
            printf("You received a raise of $%.2f", newsal - sal);
            break;
    }
    return 0;
}