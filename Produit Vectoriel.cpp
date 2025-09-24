#include<stdio.h>
int main(){
	printf("********** PRODUIT VECTORIEL ************");
	int n=3;
	float v1[n];
	float v2[n];
	float produit[n];
	
	printf("\n");
	printf("Entrer les element du vecteur 1 \n");
	for(int i=0; i<n; i++){
		printf("valeur %d: ", i+1);
		scanf("%f", &v1[i]);
	}
	printf("\n");
	printf("Entrer les element du vecteur 2 \n");
	for(int i=0; i<n; i++){
		printf("valeur %d: ", i+1);
		scanf("%f", &v2[i]);
	}
	
	produit[0]= v1[1]*v2[2] - v1[2]*v2[1];
	produit[1]= v1[2]*v2[0] - v1[0]*v2[2];
	produit[2]= v1[0]*v2[1] - v1[1]*v2[0];
	
	printf("\n");
	printf(" Le vecteur resultant du produit vectoriel est ( %.1f, %.1f, %.1f )", produit[0], produit[1], produit[2]);

	return 0;
	
	}