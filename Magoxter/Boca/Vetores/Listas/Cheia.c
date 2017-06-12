#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define MAX 100

bool cheiaFunc(int [], int);

int main(void) {
	
	int  i, n, j, tam;
	int  sequencia[MAX];
	bool cheia;
	
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		
		scanf("%d", &tam);
		for(j = 0; j < tam; j++) {
			scanf("%d", &sequencia[j]);
		}		
		
		cheia = cheiaFunc(sequencia, tam);
		
		if(cheia)
			printf("C\n");
		else
			printf("N\n");		
	
	}
	return 0;
}		

bool cheiaFunc(int sequencia[], int tam) {

	bool cheia = false;
	int diferenca[MAX];
	int j, k;
	
    for(j = 0; j < tam; j++) {
        diferenca[j] = 0;
  	}
	
    for(j = 1; j < tam; j++) {
        if(abs(sequencia[j-1] - sequencia[j]) < tam)
        	diferenca[abs(sequencia[j-1] - sequencia[j])]++;
	}
	
    cheia = true;
    k = 1;
    while(k < tam) {
        if(diferenca[k] != 1) {
        	cheia = false;
        	j = tam;
        } 
        k++;
    } 	
    
	return cheia;
}
