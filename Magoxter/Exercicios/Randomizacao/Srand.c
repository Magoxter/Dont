    /* Srand */

// Este Programa Demonstra a Utillizacao da Funcao Srand
// para Gerar uma Serie de Numeros Aleatorios

#include <stdio.h>
#include <stdlib.h>

int main () {

// Variaveis
    int num1,
        num2,
        num3;
    int semente;

// Leitura
    printf("Semente: ");
    scanf ("%d", &semente);

// Modificacao da Semente do Gerador
    srand(semente);

// Geracao de Tres Numeros Aleatorios
    num1 = rand();
    num2 = rand();
    num3 = rand();

// Apresentacao
    printf("Num1: %d\n", num1);
    printf("Num2: %d\n", num2);
    printf("Num3: %d\n", num3);

    return 0;
}
