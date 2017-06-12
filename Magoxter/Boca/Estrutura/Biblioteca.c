// Programa: biblioteca.c
// Programador: Willian Xavier
// Data: 12/09/2016
// DeclaraÃ§Ã£o das bibliotecas utilizadas
#include <stdio.h>
#include <string.h>
 
// DeclaraÃ§Ã£o dos tipos
typedef struct {
    char materia[50];
    char autor[50];
    int prateleira;
} Livro;
 
int main(void) {
// DeclaraÃ§Ã£o das variÃ¡veis
Livro Livros[100];
char materia[50];
 
    int livros;
    scanf("%d", &livros);
    for (int i = 0; i < livros; i++)
    {
        scanf("%s %s %d", Livros[i].materia, Livros[i].autor, &Livros[i].prateleira);
    }
 
    //Requisitos do BOCA.
    int repeticoes;
    scanf("%d", &repeticoes);
 
    //RepetiÑƒÑˆes do BOCA.
    for (int k = 0; k < repeticoes; k++)
    {
        /*---Entrada---*/
         
        scanf("%s", materia);
 
        /*-------------*/
        /*--AlgorÑŒtmo--*/
 
        int j = -1;
        for (int i = 0; i < livros; i++)
        {
            if (strcmp(Livros[i].materia, materia) == 0)
            {
                j = i;
                i = livros + 1;
            }
        }
 
        /*-------------*/
        /*----SaÑŒda----*/
 
        if (j == -1)
        {
            printf("-1\n");
        }
        else
        {
            printf("%s %d\n", Livros[j].autor, Livros[j].prateleira);
        };
 
        /*-------------*/
    };
 
    return 0;
}
