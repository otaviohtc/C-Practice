/* Escreva um programa usando funções que permita ao usuário escolher calcular a área ou o volume de um cubo, depois permitir ao usuário inserir as informações necessárias e no final
imprimir o resultado em tela. */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static float calcArea();
static float calcVol();
static float calcAresta();

int main(void){
    char escolha[1];

    printf("Você deseja calcular a area ou volume de um cubo? (A ou V): ");
    scanf("%s", escolha);

    if (strcmp(escolha, "A")==0){
        float area = calcArea();
        printf("O area do seu cubo e de: %.2f", area);
    }
    else if (strcmp(escolha, "V")==0){
        float volume = calcVol();
        printf("O volume do seu cubo e de: %.2f", volume);
    }
    else {
        printf("Opcao invalida");
        return 0;
    }
    return 0;
}

static float calcArea(){
    float aresta = calcAresta();
    float area = 6 * aresta * aresta;
    return area;
}

static float calcVol(){
    float aresta = calcAresta();
    float volume = aresta * aresta * aresta;
    return volume;
}

static float calcAresta(){
    float aresta;
    printf("Digite o valor da aresta: ");
    scanf("%f", &aresta);
    return aresta;
}