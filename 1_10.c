/* Faça um programa que leia o número de identificação e as 3 notas obtidas por um aluno. Calcule a média das notas sabendo-se que a nota 1 = 30% da nota – nota 2 = 30%
da nota e a nota 3 = 40% da nota. Na saída o programa deve escrever o número do aluno, suas notas, a média, juntamente com o conceito correspondente e a seguinte
mensagem 'Aprovado' se o conceito for A, B ou C, e 'Reprovado' se o conceito for D ou E. Média de aproveitamento Conceito:
A- >= 90
B- >= 75 e < 90 
C- >= 60 e < 75 
D- >= 40 e < 60
E- < 40 */

#include <stdlib.h>
#include <stdio.h>

int main(void){
    int id;
    float A, B, C, media;
    printf("Type your student's ID: ");
    scanf("%d", &id);
    printf("Type your 3 scores: (0 -> 100) \n");
    scanf("%f %f %f", &A, &B, &C);
    media = ((A*0.3) + (B*0.3) + (C*0.4));
    
    printf("Student's ID: %d\n", id);
    printf("Score 1: %.2f, Score 2: %.2f, Score 3: %.2f\n", A, B, C);
    printf("Final mean score: %.2f\n", media);
    if (media>=90){
        printf("Grade A\n");
        printf("Approved\n");
    }
    if (media>=75 && media<90){
        printf("Grade B\n");
        printf("Approved\n");
    }
    if (media>=60 && media<75){
        printf("Grade C\n");
        printf("Approved\n");
    }
    if (media>=40 && media<60){
        printf("Grade D\n");
        printf("Reproved\n");
    }
    if (media<40){
        printf("Grade E\n");
        printf("Reproved\n");
    }
    return 0;
}