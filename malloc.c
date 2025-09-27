#include <stdio.h>
#include <stdlib.h> // pour malloc et free

int main(void)
{
    int *ptr;  // pointeur vers int
    ptr = malloc(sizeof(int)); // on réserve l'espace pour 1 entier

    if (ptr == NULL) // toujours vérifier si malloc a marché
    {
        printf("Erreur d'allocation mémoire\n");
        return (1);
    }

    *ptr = 42; // on stocke la valeur 42 dans la mémoire réservée
    printf("Valeur = %d\n", *ptr);

    free(ptr); // libère la mémoire
    return (0);
}
