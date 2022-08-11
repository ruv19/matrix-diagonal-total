#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void) {
	int n, i, j, top=0;
	printf("matrisin boyutunu giriniz:\n");
	scanf("%d",&n);
	int a[n][n];
	
	
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
            
			printf("a[%d][%d]=",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			if(i == j) {
				top = top+a[i][j];
			}
		}
	}
	
	printf("\ntoplam=%d\n",top);
}
