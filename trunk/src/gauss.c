#include "gauss.h"
#include <stdio.h>

/**
 * Zwraca 0 - elimnacja zakonczona sukcesem
 * Zwraca 1 - macierz osobliwa - dzielenie przez 0
 */
int eliminate(Matrix *mat, Matrix *b){
	int i,j,k;
	double dziel;
	for(i=0; i<mat->c; i++){
		if((mat->data[i][i])==0)
			return 1;
		for(j=i+1; j<mat->r; j++){
			dziel=((mat->data[j][i])/(mat->data[i][i]));
			printf("%g",dziel);
			for(k=i; k<mat->c;k++)
				mat->data[j][k]=(mat->data[j][k])-((mat->data[i][k])*dziel);

			b->data[j][0]=(b->data[j][0])-((b->data[i][0])*dziel);
		
	}
	}

		return 0;
}

