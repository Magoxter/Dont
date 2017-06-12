#include<stdio.h>
#include<string.h>
#include<stdbool.h>

typedef struct {
	
	char  numero[3];
	float preco;
	
} Erva;

int main(void) {
	
	bool existe;
	char numeroP[3];
	Erva tipo[10];	
	int  i, n, p, x, pesquisas;
	
	for(i = 0; i < 10; i++) {
		scanf("%s", &tipo[i].numero);
	}
	
	for(i = 0; i < 10; i++) {
		scanf("%f", &tipo[i].preco);
	}

	scanf("%d", &pesquisas);
	for(p = 0; p < pesquisas; p++) {
		scanf("%s", &numeroP);
		for(n = 0; n < 10; n++) {
			if(strcmp(numeroP, tipo[n].numero) == 0) {
				existe = true;
				x = n;
				n = 10;
			}
			else
				existe = false;				
		}
		
		if(existe)
			printf("%.2f\n", tipo[x].preco);
		else
			printf("produto inexistente\n");		
	
	}
		
	return 0;
}
