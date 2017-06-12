    /* Srand3b */

// Este Programa Demonstra a Utillizacao da Funcao Srand
// para Gerar uma Serie de Numeros Aleatorios entre a e b

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {

// Variaveis
    int a,b,
        n,i,
        numero,
        intervalo;

// Leitura
    printf("Numero Inicial e o Numero Final: ");
    scanf ("%d", &a);
    scanf ("%d", &b);
    printf("Quantidade de Elementos: ");
    scanf ("%d", &n);

// Intervalo
    intervalo = (b - a) + 1;

// Geracao da Semente
    srand(time(NULL));

// Geracao dos Numeros e Impressao
    for (i = 0; i < n; i++) {
         numero = rand() % intervalo + a;
         printf ("%d ", numero);
    }
    printf("\n");

    return 0;
}
