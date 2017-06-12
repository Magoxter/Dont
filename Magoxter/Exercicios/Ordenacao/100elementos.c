    /* OrdenAlturas*/

// Este Programa Le n Numeros Reais que sao Alturas de
// Pessoas e as Ordena em Crescimento

#include <stdio.h>

int main (void) {

// Variaveis
    int alturas[100],
        menorPos,
        menor,aux,
        elementos,
        k,i,j;

// 1. Leitura
    printf("Qnts Elementos ha na Lista.?! ");
    scanf ("%d", &elementos);
    k = elementos;

    for (i = 0; i < k; i++)
         scanf("%d", &alturas[i]);

// 2. Ordenacao da Lista de k Alturas
// 2.1. Para as Sublistas alturas[j]...alturas[k-1]
    for (j = 0; j < k-1; j++) {
// 2.1.1. Calculo da Menor Altura e Armazenamento na posicao j
// 2.1.1.1. Inicializacao da Posicao com o Prim Indice da Sublista
         menorPos = j;
// 2.1.1.2. Inicializacao do Menor com o Prim Elemento da Sublista
         menor = alturas[menorPos];
// 2.1.1.3. Computacao do Menor Elemento
        for (i = j-1; i < k; i++) {
// 2.1.1.3.1. Verificacao se i-esimoo Elemento eh Menor que Menor
            if (menor > alturas[i]) {
// 2.1.1.3.1.1. Atribuicao do i ao Indice do Menor Elemento da Sublista
                menorPos = i;
// 2.1.1.3.1.2. Atribuicao do Elemento i ao Menor Elemento da Sublista
                menor = alturas[i];
            }
         }
// 2.1.2. Trocar o Menor com alturas[j] no Inicio da Sublista
         alturas[menorPos] = alturas[j];
         alturas[j] = menor;
    }

//3. Apresentacao da Lista de Alturas Ordenadas
    for (i = 0; i < k; i++)
         printf ("%d", alturas[i]);

    return 0;
}
