    /* Insercao */

// Este Programa Insere um elemento no Final de uma Dada Lista

#include <stdio.h>

int TAM = 25;

int main(void) {

// Variaveis
    int lista[25] = {20,16,26,10,21,32,15,24,25,36,17,28,9,30},
        elemento,
        tam,n,i;

// Leitura
    printf("Elemento a Ser Inserido: ");
    scanf ("%d", &elemento);

    tam = 14;

// Insercao
    if (tam == TAM)
        printf("A Lista esta Cheia\n");
    else {
        lista[tam] = elemento;
        tam++;
    }

// Apresentacao
    for (i = 0; i < tam; i++)
         printf("%3d", lista[i]);

    return 0;
}
