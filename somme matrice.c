
#include <stdio.h>

#define MAX 4


typedef struct {
    int lignes;
    int colonnes;
    int elements[MAX][MAX];
} Matrice;


void lireMatrice(Matrice *m) {
    printf("Entrez le nombre de lignes : ");
    scanf("%d", &m->lignes);
    printf("Entrez le nombre de colonnes : ");
    scanf("%d", &m->colonnes);

    printf("Entrez les éléments de la matrice :\n");
    for (int i = 0; i < m->lignes; i++) {
        for (int j = 0; j < m->colonnes; j++) {
            printf("Élément [%d][%d] : ", i, j);
            scanf("%d", &m->elements[i][j]);
        }
    }
}

// Fonction pour afficher une matrice
void afficherMatrice(Matrice m) {
    printf("Matrice (%d x %d) :\n", m.lignes, m.colonnes);
    for (int i = 0; i < m.lignes; i++) {
        for (int j = 0; j < m.colonnes; j++) {
            printf("%d\t", m.elements[i][j]);
        }
        printf("\n");
    }
}

// Fonction pour additionner deux matrices
Matrice sommeMatrices(Matrice m1, Matrice m2) {
    Matrice resultat;
    resultat.lignes = m1.lignes;
    resultat.colonnes = m1.colonnes;

    for (int i = 0; i < m1.lignes; i++) {
        for (int j = 0; j < m1.colonnes; j++) {
            resultat.elements[i][j] = m1.elements[i][j] + m2.elements[i][j];
        }
    }

    return resultat;
}

int main() {
    Matrice A, B, C;

    printf("=== Matrice A ===\n");
    lireMatrice(&A);

    printf("\n=== Matrice B ===\n");
    lireMatrice(&B);

    // Vérification de la compatibilité
    if (A.lignes != B.lignes || A.colonnes != B.colonnes) {
        printf("Erreur : les matrices doivent avoir la même taille pour être additionnées.\n");
        return 1;
    }

    C = sommeMatrices(A, B);

    printf("\n=== Matrice A ===\n");
    afficherMatrice(A);

    printf("\n=== Matrice B ===\n");
    afficherMatrice(B);

    printf("\n=== Somme A + B ===\n");
    afficherMatrice(C);

    return 0;
}
