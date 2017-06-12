    /* Rand */

// Este Programa Demonstra a Utilizacao da Funcao Srand
// para a Gerar uma Serie de Numeros Aleatorios

#include <stdio.h>
#include <stdlib.h>

int main (void) {

// Variaveis
    int num1,
        num2,
        num3;

// Geracao de um Numero Aleatorio
    num1 = rand();
    num2 = rand();
    num3 = rand();

// Apresentacao
    printf ("Num1: %d\n", num1);
    printf ("Num2: %d\n", num2);
    printf ("Num3: %d\n", num3);

    return 0;
}
