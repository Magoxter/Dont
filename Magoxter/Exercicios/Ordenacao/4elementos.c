    /* Ordenacao */

// Este Programa Le 4 Numeros Reais e
// os Ordena em Ordem Crescente

#include <stdio.h>

int main (void) {

// Variaveis
    float   num1,
            num2,
            num3,
            num4,
            aux;
    bool    troca;

// Leitura
    printf("Num1: ");
    scanf ("%f", &num1);
    printf("Num2: ");
    scanf ("%f", &num2);
    printf("Num3: ");
    scanf ("%f", &num3);
    printf("Num1: ");
    scanf ("%f", &num4);

// Ordenacao dos Elementos
    troca = true;

    while (troca) {
        troca = false;

// O Menor Elemento para num1 e o Maior para num2
        if (num1 > num2) {
            aux = num1;
            num1 = num2;
            num2 = aux;
            troca = true;
        }

// O Menor Elemento para num2 e o Maior para num3
        if (num2 > num3) {
            aux = num2;
            num2 = num3;
            num3 = aux;
            troca = true;
        }

// O Menor Elemento para num3 e o Maior para num4
        if (num3 > num4) {
            aux = num3;
            num3 = num4;
            num4 = aux;
            troca = true;
        }
    }

    return 0;
}
