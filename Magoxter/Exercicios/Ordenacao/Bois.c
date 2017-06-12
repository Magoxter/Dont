    /* Bois */

// Este Programa le um Conjunto de Dados referentes ao Numero
// de Identificacao e o Peso dos Bois em uma Fazenda, Calcula
// e Imprime o Maior e o Segundo Maior, o Menor e o Segundo
// Menor Peso com os Numeros dos Bois

#include <stdio.h>

int main (void) {

// Variaveis
    int     gordo1,gordo2,
            magro1,magro2,
            numBois,numero;
    double  maiorPeso1,maiorPeso2,
            menorPeso1,menorPeso2,
            peso,soma,media;
    int     l,i,n,c,k,y,x;

// Inicializacao
    gordo1 = gordo2 = 0;
    magro1 = magro2 = 0;

    maiorPeso1 = maiorPeso2 = 0.0;
    menorPeso1 = menorPeso2 = 5000.0;

    soma = 0.0;

// Leitura
    printf("Qnts Bois ha.?! ");
    scanf ("%d", &numBois);

    for (i = 0; i < numBois; i++) {
         printf("Numero do Boi: ");
         scanf ("%d", &numero);
         printf("Peso do Boi: ");
         scanf ("%f", &peso);

// Soma dos Pesos
         soma += peso;

// Maior e Segundo Maior Peso
        if (peso > maiorPeso1) {
            maiorPeso2 = maiorPeso1;
            gordo2 = gordo1;

            maiorPeso1 = peso;
            gordo1 = numero;
        }

        else if (peso > maiorPeso2) {
                 maiorPeso2 = peso;
                 gordo2 = numero;
        }

// Menor e Segundo Menor Peso
        if (peso < menorPeso1) {
            menorPeso2 = menorPeso1;
            magro2 = magro1;

            menorPeso1 = peso;
            magro1 = numero;
        }

        else if (peso < menorPeso2) {
                 menorPeso2 = peso;
                 magro2 = numero;
        }
    }

// Media dos Pesos
    media = soma/numBois;

// Apresentacao
    printf("Media de %d bois = %7.2f Kg\n", numBois, media);
    printf("Boi Mais Gordo 1 = %d com %7.2f Kg\n", gordo1, maiorPeso1);
    printf("Boi Mais Gordo 2 = %d com %7.2f Kg\n", gordo2, maiorPeso2);
    printf("Boi Mais Magro 1 = %d com %7.2f Kg\n", magro1, menorPeso1);
    printf("Boi Mais Magro 2 = %d com %7.2f Kg\n", magro2, menorPeso2);

    return 0;
}
