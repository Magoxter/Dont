// Programa: intersecao01f.c
// Programador: Edson
// Data: 15/09/2016
// Este programa lê dois arranjos de inteiros, calcula a
// intersecção entre ambos e imprime o resultado

// Declaração das bibliotecas utilizadas
#include<stdio.h>

// Declaração das constantes
#define MAX 500

// Declaração das funções
void intersecaof(int [], int, int [], int, int [], int*);

// Início da função principal
int main(void) {

    int a[MAX], b[MAX], c[MAX];
    int tamA, tamB, tamC;
    int i, n, j;

// Passo 1. Número de vezes que o programa será executado
    scanf("%d", &n);
    for(i = 0; i < n; i++) {


// Passo 1. Leia os vetores
// Passo 1.1. Leia o vetor a
// Passo 1.1.1. Leia o tamanho do vetor a
    scanf("%d", &tamA);
// Passo 1.1.2. Leia os elementos de a
    for(j = 0; j < tamA; j++) {
       scanf("%d", &a[j]);
    } // fim for elementos de a

// Passo 1.2. Leia o vetor b
// Passo 1.2.1. Leia o tamanho do vetor b
    scanf("%d", &tamB);
// Passo 1.2.2. Leia os elementos de b
    for(j = 0; j < tamB; j++) {
       scanf("%d", &b[j]);
    } // fim for elementos de b

// Passo 2. Compute a intersecção de a e b
    intersecaof(a, tamA, b, tamB, c, &tamC);

// Passo 3. Imprima o resultado
    if(tamC > 0) {
       for(j = 0; j < tamC; j++) {
          printf("%d ", c[j]);
       } // fim for
        printf("\n");
    } // fim if
    else
        printf("vazia\n");

    } // fim for laço principal
    return 0;
} // fim da função principal

// Implementação da função
// Função: intersecaof.c
// Programador: Edson
// Data: 15/09/2016
// Esta função calcula a interseção de dois arranjos
void intersecaof(const int x[], int tamx, const int y[],
int tamy, int z[], int* tamz) {

    int k;

// Passo i.1. Inicialize o número de elementos de z
   *tamz = 0;
// Passo i.2. Compute a interseção
// Passo i.2.1. Para cada elemento de x, verifique se está em y
   for(j = 0; j < tamx; j++) {
// Passo i.2.1.1. Compare x[i] com os elementos de y
      k = 0;
      while(k < tamy && x[j] != y[k]) {
// Passo i.2.1.1.1. Compare com o próximo elemento de y
         k++;
      } // fim while i
// Passo i.2.1.2. Se o elemento x[i] está em y, inclua em z
      if(x[j] == y[k]) {
         z[*tamz] = x[j];
         *tamz = *tamz + 1;
      } // fim if i
   } // fim for i

   return;

} // fim da função intersecaof.c
