// Programa: telefonista.c
// Programador: Willian Xavier
// Data: 12/09/2016
// DeclaraÃ§Ã£o das bibliotecas utilizadas
#include <stdio.h>
#include <string.h>

// DeclaraÃ§Ã£o de tipos 
typedef struct
{
    char nome[50];
    char numero[10];
} Pessoa;
 
int main(void) {
// DeclaraÃ§Ã£o das variÃ¡veis
Pessoa Pessoas[100];
char nomePessoa[50];
int numeroPessoas;

// Passo 1. Leia o nome das pessoas e seus respectivos telefones 
   scanf("%d", &numeroPessoas);
   for (int i = 0; i < numeroPessoas; i++) {
        scanf("%s %s", Pessoas[i].nome, Pessoas[i].numero);
    }
 
// Passo A. Leia o nÃºmero de vezes que o programa serÃ¡ executado
int repeticoes;
   scanf("%d", &repeticoes);
// Passo B. Repita n vezes 
   for (int k = 0; k < repeticoes; k++) {
// Passo 2. Leia o nome da pessoa
   scanf("%s", nomePessoa);
// Passo 3. Verifique o nome da pessoa e o seu nÃºmero de telefone
    int k = -1;
       for (int i = 0; i < numeroPessoas; i++) {
            if (strcmp(nomePessoa, Pessoas[i].nome) == 0) {
                k = i;
                i = numeroPessoas + 1;
            }
        }
// Passo 4. Imprima o resultado
        if (k != -1)
        {
            printf("%s\n", Pessoas[k].numero);
        }
        else
        {
            printf("%s nao tem telefone!\n", nomePessoa);
        }
    }
 
    return 0;
}
