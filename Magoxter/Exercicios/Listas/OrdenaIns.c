    /* OrdenaIns */

// Este Programa Insere um elemento no Final de uma Dada Lista Ordenada

#include <stdio.h>

int TAM = 25;

int main(void) {

// Variaveis
    int lista[25] = {9,10,15,16,17,20,21,24,25,26,28,30,32,36},
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
        while (elemento > lista[i] && i < tam)
               i++;

        for (n = tam; n < i; n--)
             lista[n] = lista[n-1];
            lista[i] = elemento;
            tam = tam + 1;
    }

// Apresentacao
    for (i = 0; i < tam; i++)
         printf("%3d", lista[i]);

    return 0;
}
