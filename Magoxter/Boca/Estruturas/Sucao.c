//Programa: sucao.c
//Programador: Willian Xavier
// Data: 01/09/2016
//Este programa le a entrada de n sucos e computa quantas vezes cada suco
//apareceu, imprimindo a relacao dos nomes dos sucos na ordem em
//que foi na entrada
//Declaracao das bibliotecas
#include<stdio.h>
#include<stdbool.h>
#include<string.h>

//Declaracao de tipos
typedef struct {
    char  nome[50];
    int quantidade;
} Vendas;

//Inicio da funcao principal
int main (void){

//Declaracao das variaveis locais
Vendas sucos[250];    //Vetor para armazenar 250 registros
char   nomesuco[50];
bool   existe;
int    n;            // Total de sucos vendidos
int    diferentes;   // Total de sabores diferentes de sucos
//Passo 1. Leia a quantidade de sucos
    scanf("%d", &n);
    diferentes = 0;
//Passo 2. Leia os n sucos vendidos
  for(int i = 0; i < n; i++){
//Passo 2.1. Leia o nome do suco vendido
    scanf("%s", nomesuco);
//Passo 2.2. Compare o suco com os vendidos anteriormente
    existe = false;
    for(int j = 0; j < diferentes; j++){
        if(strcmp(nomesuco, sucos[j].nome) == 0){ //suco existe
            sucos[j].quantidade++; // incrementar a qtde sucos j vendidos
            existe = true; //Suco ja tinha sido vendido anteriormente
            j = diferentes; // sai do laco for
        } // fim do if comprara
    } // fim for j (procura o vetor de registros)
//Passo 2.3. Se o sabor do suco ainda nao apareceu, cadastrar
    if(!existe){
        strcpy(sucos[diferentes].nome, nomesuco); // armazenar o nome do suco
        sucos[diferentes].quantidade = 1;
        diferentes++; //acrescentar um suco diferente
    } // fim if
  }//fim for i
//Passo 3. Imprimir os resultados
  for(int i = 0; i < diferentes; i++){
    printf("%s %d\n", sucos[i].nome, sucos[i].quantidade);
  }
return 0;
}
