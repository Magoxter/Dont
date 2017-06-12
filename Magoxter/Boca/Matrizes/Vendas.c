// Programa: vendastotal.c
// Programador:
// Data: 21/11/2010
// Este programa lÃª uma tabela de vendas de automÃ³veis e uma lista com os
// valores de vendas dos automÃ³veis e calcula o valor total das vendas
// de cada vendedor e o total de vendas de todos os vendedores.
// DeclaraÃ§Ã£o das bibliotecas utilizadas
#include<stdio.h>    // scanf, printf
// DeclaraÃ§Ã£o das constantes globais
#define MAX 25
// DeclaraÃ§Ã£o dos tipos
typedef int Tabela[MAX][MAX];

// declaraÃ§Ã£o das funÃ§Ãµes
void calcTotVendas(Tabela, int, int, double a[], double b[]);

// inÃ­cio da funÃ§Ã£o principal
int main(void) {
// declaraÃ§Ã£o das variÃ¡veis locais
int         linhas,        // nÃºmero de linhas (vendedor) na tabela de vendas
            colunas;       // nÃºmero de colunas (modelos) na tabela de vendas
Tabela      vendas;        // tabela de vendas
double      valores[MAX];  // preÃ§os dos automÃ³veis
double      totais[MAX+1];   // valor total de vendas de cada vendedor
int n;

// prÃ©: linhas, colunas, vendas, valores

// Passo A. Leia o nÃºmero de execuÃ§Ãµes
scanf("%d", &n);
// Passo B. Repita k vezes
for(int l =0; l < n; l++) {
// Passo 1. Leia a tabela de vendas em uma matriz vendas m X n e os valores
// Passo 1.1.leia o numero de linhas e colunas
    scanf("%d %d", &linhas, &colunas);
// Passo 1.2. Leia a tabela, linha a linha
    for(int vendedor = 0; vendedor < linhas; vendedor++){
// Passo 1.2.1. Leia os veicuos vendidos pelo vendedor
        for(int modelos = 0; modelos < colunas; modelos++){
            scanf("%d", &vendas[vendedor][modelos]);
        } // fim for modelos
    } // fim for vendedor
// Passo 1.3. Leia o valor de venda dos modelos dos veÃ­culos
    for(int modelos = 0; modelos < colunas; modelos++){
        scanf("%lf", &valores[modelos]);
    }
// Passo 2. Calcule os valores totais de vendas de cada vendedor e da revenda.
   calcTotVendas(vendas, linhas, colunas, valores, totais);
// Passo 2. Imprima o array Vendas com cabeÃ§alhos apropriados.
    for(int vendedor = 0; vendedor < linhas; vendedor++){
        printf("%5d R$%12.2f\n", vendedor+1, totais[vendedor]);
    }
    printf("Total R$%12.2f\n\n", totais[linhas]);
} // fim for

   return 0;
} // fim da funÃ§Ã£o principal

// implementaÃ§Ã£o das funÃ§Ãµes

// FunÃ§Ã£o: calcTotVendas
// Programador:
// Data: 24/02/2013
// FunÃ§Ã£o para calcular a multiplicaÃ§Ã£o de cada linha da tabela
// de vendas pelo vetor dos valores dos automÃ³veis (produto interno).
// Cada um desses valores indica os valores da vendas totais para cada um
// dos vendedores. A funÃ§Ã£o computa tambÃ©m o valor total das vendas da
// revenda
void calcTotVendas(Tabela vendas, int linhas, int colunas,
                   double valores[MAX], double totais[MAX]) {
// Passo cTV.1. Incicilize o total de vendas da revenda
totais[linhas] = 0.0;
// Passo cTV.2. Para vendedor variando de 0 a linhas-1 faÃ§a
   for(int vendedor = 0; vendedor < linhas; vendedor++){
// Passo cTV.2.1. Inicialize TotalLin
     totais[vendedor] = 0.0;
// Passo cTV.2.2. Para modelo variando de 0 a colunas-1 faÃ§a
      for(int modelos = 0; modelos < colunas; modelos++){
// Passo cTV.2.2.1. Calcule o valor total de vendas de cada vendedor
    totais[vendedor] = totais[vendedor] + vendas[vendedor][modelos] * valores[modelos];
     }  // fim for modelo

//      printf("Vendas do vendedor  %3u:%5u\n", vendedor + 1, totais[vendedor]);
// Passo cTV.2.3. Armazene o total de vendas da revenda
   totais[linhas] = totais[linhas] + totais[vendedor];

   } // fim for vendedor
   return;

} // fim da funÃ§Ã£o calcTotVendas
