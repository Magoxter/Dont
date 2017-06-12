    /* Srand41a */

// Este Programa Demonstra a Utillizacao da Funcao
// Srand para Gerar uma Serie de Numeros Aleatorios
// Reais entre a e b

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {

// Variaveis
    float   a,b,x,
            intervalo;
    int     n,i;

// Leitura
    printf("Numero Inicial e o Numero Final: ");
    scanf ("%f", &a);
    scanf ("%f", &b);
    printf("Quantidade de Elementos: ");
    scanf ("%d", &n);

// Intervalo
    intervalo = (b - a) + 1.0;

// Geracao da Semente
    srand(time(NULL));

// Geracao dos Numeros e Impressao
    for (i = 0; i < n; i++) {
         x = (float) rand() / RAND_MAX;
         x = x * intervalo + a;
         printf ("%.2f ", x);
    }
    printf("\n");

    return 0;
}
