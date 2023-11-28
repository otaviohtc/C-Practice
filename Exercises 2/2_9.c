/* Uma loja utiliza o código V para compras à vista e o código P para compras a prazo. Faça um algoritmo que receba o código de e o valor de 15 transações.
Calcule e mostre:
- O valor total das compras à vista
- O valor total das compras à prazo
- O valor total das compras efetuadas */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void){
    float total, totalV = 0, totalP = 0, priceV, priceP;
    char cod[50];
    for (int i=0; i<15; i++){
        printf("Type the transaction code %d: (V or P) ", i+1);
        scanf("%s", cod);
        if (strcmp(cod, "V")==0){
            printf("Type the price of the transaction (a vista): ");
            scanf("%f", &priceV);
            totalV += priceV;
        }
        else if (strcmp(cod, "P")==0){
            printf("Type the price of the transaction (a prazo): ");
            scanf("%f", &priceP);
            totalP += priceP;
        }
        else {
            printf("Invalid transaction code, try again\n");
            i--;
        }
    }
    total = totalP + totalV;
    printf("The total value (a vista): %.2f\n", totalV);
    printf("The total value (a prazo): %.2f\n", totalP);
    printf("The total value: %.2f", total);
    return 0;
}