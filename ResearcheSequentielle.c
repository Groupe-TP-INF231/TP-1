#include <stdio.h>

int rechercheSequentielle(int tab[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (tab[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(tab) / sizeof(tab[0]);
    int x = 5;

    int index = rechercheSequentielle(tab, n, x);

    if (index != -1) {
        printf("L'élément %d est trouvé à l'index %d\n", x, index);
    } else {
        printf("L'élément %d n'est pas trouvé dans le tableau\n", x);
    }

    return 0;
}