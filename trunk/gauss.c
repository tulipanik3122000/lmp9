#include "gauss.h"
#include <stdio.h>

/**
 * Zwraca 0 - elimnacja zakonczona sukcesem
 * Zwraca 1 - macierz osobliwa - dzielenie przez 0
 */
int eliminate(Matrix *mat, Matrix *b){
	int i,j,k;
	int g=0;
	printf("kontrol0");
	for(i=0; i<mat->c; i++){
		if((mat->data[i][g])==0)
			return 1;
		for(j=i+1; j<mat->c; j++){
			for(k=g; k<mat->r;k++)
				mat->data[j][k]=(mat->data[j][k])/(mat->data[i][k]);
			b->data[j][0]==(b->data[j][0])/(b->data[i][0]);
			printf("kontrol");
		}
		g++;
		printf("kontrol2");
	}
	printf("kontrol3");

		return 0;
}

