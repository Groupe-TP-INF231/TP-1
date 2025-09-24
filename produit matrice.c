
#include <stdio.h>

#define MAX 4

// Définition de la structure Matrice
typedef struct {
    int lignes;
    int colonnes;
    int elements[MAX][MAX];
} Matrice;

// Fonction pour lire une matrice
void lireMatrice(Matrice *m) {
    printf("Entrez le nombre de lignes (max %d) : ", MAX);
    scanf("%d", &m->lignes);
    printf("Entrez le nombre de colonnes (max %d) : ", MAX);
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

// Fonction pour multiplier deux matrices
Matrice produitMatrices(Matrice m1, Matrice m2) {
    Matrice resultat;
    resultat.lignes = m1.lignes;
    resultat.colonnes = m2.colonnes;

    for (int i = 0; i < m1.lignes; i++) {
        for (int j = 0; j < m2.colonnes; j++) {
            resultat.elements[i][j] = 0;
            for (int k = 0; k < m1.colonnes; k++) {
                resultat.elements[i][j] += m1.elements[i][k] * m2.elements[k][j];
            }
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
    if (A.colonnes != B.lignes) {
        printf("Erreur : le nombre de colonnes de A doit être égal au nombre de lignes de B.\n");
        return 1;
    }

    C = produitMatrices(A, B);

    printf("\n=== Matrice A ===\n");
    afficherMatrice(A);

    printf("\n=== Matrice B ===\n");
    afficherMatrice(B);

    printf("\n=== Produit A x B ===\n");
    afficherMatrice(C);

    return 0;
}
