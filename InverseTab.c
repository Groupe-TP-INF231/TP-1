#include <stdio.h>

void inverserTableau(int tab[], int n) {
    int debut = 0;
    int fin = n - 1;
    while (debut < fin) {
        int temp = tab[debut];
        tab[debut] = tab[fin];
        tab[fin] = temp;
        debut++;
        fin--;
    }
}

void afficherTableau(int tab[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main() {
    int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(tab) / sizeof(tab[0]);

    printf("Tableau original : ");
    afficherTableau(tab, n);

    inverserTableau(tab, n);

    printf("Tableau inversé : ");
    afficherTableau(tab, n);

    return 0;
}