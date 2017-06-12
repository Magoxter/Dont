    /* MenorElemento */
// Este Programa Recebe uma dada Lista e Retira
// o Menor Elemento

#include <stdio.h>

int main (void) {

// Variaveis
    int lista[25] = {20,16,26,10,21,32,15,24,25,36,17,28,9,30},
        indice,aux,
        menor,tam,i;

// Inicializacao
    tam = 14;
    menor = lista[0];
    indice = 0;

// Computacao do Menor
    for (i = 0; i < tam; i++) {
        if (lista[i] < menor) {
            menor = lista[i];
            indice = i;
        }
    }

// Menor Elemento para o Inicio da Lista
    aux = lista[0];
    lista[0] = lista[indice];
    lista[indice] = aux;

// Apresentacao
    for (i = 0; i < tam; i++)
         printf("%3d\n", lista[i]);
    printf("Menor: %d\n", lista[0]);

    return 0;
}
