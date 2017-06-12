    /* AreaTrapezio */

// Este Programa Calcula a Area sob o Grafico da Funcao
// y = Poli(x) usando o Metodo dos Trapezios

#include <stdio.h>

float areAprox(float,float,unsigned int);

int main (void) {

// Variaveis
    float           a,b,
                    area;
    unsigned int    numSubintervalos;

// Apresentacao do Programa
    printf("\n\nPrograma para Calcular a Area pelo Metodo dos Trapezios\n");
    printf("Programa que usa a Funcao AreAprox para Encontrar a Area\n");
    printf("Aproximada sob o Grafico de y = Poli(x). \n\n");

// Leitura
    printf("Limite Esquerdo do Subintervalo [a,b]: ");
    scanf ("%f", &a);
    printf("Limite Direito do Subintervalo [a,b]: ");
    scanf ("%f", &b);
    printf("Subintervalos: ");
    scanf ("%u", &numSubintervalos);

// Valor Aprox da Area
    area = areAprox(a,b,numSubintervalos);

// Apresentacao
    printf("\n\nArea Aproximada usando %u ", numSubintervalos);
    printf(" Subintervalos eh %f\n", area);

    return 0;
}

float areAprox(float a, float b, unsigned int n) {

/* Esta Funcao Retorna o Valor Aproximado da Area sob o Grafico
 . da Funcao y = Poli(x) de x = a a x = b usando o Metodo dos Trapezios
 */

// Variaveis
    float   x,deltaX,
            altura,
            areaTrap;

// Funcoes Locais
    float f(float);

// Tamanho do Subintervalo
    deltaX = (b - a) / (float) n;

// Valor da Soma
    altura = 0.0;

// P/ x em {a+deltaX,...,b-deltaX} passo deltaX faca
    for (x = a+deltaX; x < b; x += deltaX)
         altura += f(x);
        areaTrap = ((f(a)+f(b))/2.0 + altura) * deltaX;

    return areaTrap;
}

float f (float x) {
    return x*x;
}
