//Programa:ordenains.c
//Programador:

#include<stdio.h>

void ordenainsf(int a[100], int m);

int main(void){
int i, n, m, a[100];
scanf("%d", &n);
for(i=0;i<n;i++){
	scanf("%d", &m);
	for(int j=0;j<m;j++){
		scanf("%d", &a[j]);
	}
	ordenainsf(a, m);
}
return 0;
}

//Função:ordenainsf.c

void ordenainsf(int a[100], int m){
	
	int j, l, aux;
	
for(l=1;l<m;l++){
aux=a[l];
j=l-1;
while(j>=0&&a[j]>aux){
    a[j+1]=a[j];
    j--;
}
a[j+1]=aux;
}
		for(int i=0;i<m;i++){
			printf("%d ", a[i]);
		}
		printf("\n");	
	
	
	return;
}
