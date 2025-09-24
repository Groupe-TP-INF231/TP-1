#include<stdio.h>
int main(){
	printf("********** PRODUIT MATRICE * VECTEUR ************ \n");

	int rows, cols, n;
	printf("Entrer le nombre de ligne de la matix : ");
	scanf("%d", &rows);
	printf("Entrer le nombre de colonnes de la matix : ");
	scanf("%d", &cols);
	printf("Entrer la dimension du vecteur : ");
	scanf("%d", &n);
	
	if(cols != n){
		printf(" \nMultiplication impossible! Le nombre de colonnes de la matrix n'est pas egale au nombre de ligne du vecteur");
		return 0;
	}
	
	float matrix[rows][cols];
	float v[n];
	float resultat[rows];
	
	printf("\n");
	for(int i=0; i<rows; ++i){
		for(int j=0; j<cols; ++j){
			printf("Entrer l'element matrix[%d][%d] : ", i,j);
			scanf("%f", &matrix[i][j]);
		}
	}
	
	printf("\n");
	printf("Entrer les element du vecteur \n");
	for(int i=0; i<n; i++){
		printf("valeur %d: ", i+1);
		scanf("%f", &v[i]);
	}
	
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			resultat[i] += matrix[i][j]*v[j]; 
		}
	}
	
	printf("\n");
	printf(" Le vecteur resultant est (");
	for(int i=0; i<rows; i++){
		printf(" %.1f ", resultat[i]);
	}
	printf(")");
	
	return 0;
}