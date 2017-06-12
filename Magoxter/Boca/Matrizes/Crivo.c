#include<stdio.h>
#define MAX 1000

void crivoFunc(int);

int main(void) {
	
	int k, n, num;
	
	scanf("%d", &n);
	for(k = 0; k < n; k++) {
		
		scanf("%d", &num);
		
	    crivoFunc(num);
		
		printf("\n");		
		
	}
	return 0;
}

void crivoFunc(int num) {
	
	int i, j, contador;
	
	for(i = 2; i <= num; i++) {
	    contador = 0;
		for(j = 1; j <= i; j++) {
			if(i % j == 0) {
				contador++;
			}	
		}
		if(contador == 2) {
			printf("%d ", i);
		}
	}	

	return;
}
