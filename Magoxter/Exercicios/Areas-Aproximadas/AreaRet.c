    /* AreaRetangulo */

// Este Programa Calcula a Area sob o Grafico de uma Funcao f
// de x = a ate x = b usando o Metodo dos Retangulos e, com o
// Valor das Funcoes Escolhidas nos Pontos Medios de cada Subintervalo.

#include <stdio.h>

float f(float);

int main (void) {

// Variaveis
    unsigned int    n,i;
    float           a,b,x,
                    deltaX,
                    altura,
                    area;

// Leitura
    printf("Valor de a: ");
    scanf ("%f", &a);
    printf("Valor de b: ");
    scanf ("%f", &b);
    printf("Subintervalos (n): ");
    scanf ("%u", &n);

// Area Sob a Curva
    deltaX = (a - b) / (float) n;
    altura = 0.0;
    x = a + deltaX / 2.0;

    for (i = 0; i < n; i++) {
         altura += f(x);
         x += deltaX;
    }

// Soma da Area do Subintervalo a Area Total
    area = altura * deltaX;

// Apresentacao
    printf("Area Aproximada usando %u Subintervalos eh %f\n", &n, &area);

    return 0;
}

float f(float x) {

// Variaveis
    float valor;

// Valor de f no Ponto X
    valor = x * x + 1.0;

    return valor;
}
