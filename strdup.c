// Prendre src, calculez sa taille
// Apres je malloc une zone memoire assez grande pour copier ce quil y a dans src
// apres je copie un peu comme strcpy et joublie pas le \0 à la fin
// et return l'adresse de cette zone 


#include <stdlib.h> 

char	*ft_strdup(char *src)
{
	int		i;  // compteur qui va servir a parcourir src
	char	*dup; // le pointeur qui va contenir l'addresse du nouvel espace mémoire alloué (la copie)


	i = 0;               // on part de i = 0
	while (src[i] != '\0')      // tant qu'ont est pas à la fin
		i++;                    // on avance dans la chaine notre but cest de calculer la longueur
	dup = malloc(i + 1);        // i = la taille de la chaine + 1 pour inclure le \0 final sinon la chaine ne sera pas valide
	if (!dup)                 // ça veut dire si dup est nul en gros si malloc à echouer
		return (0);           // on retourne 0 (equivalent de NULL)
	i = 0;                   // on remet i à 0 pour pouvoir faire copy
	while (src[i] != '\0')   // et la c comme la fonction strcpy en gros tant quu src nest pas a la fin on rentre dans la boucle
	{
		dup[i] = src[i];    // on copie src dans dup en gros on affecte dup[i] à src [i]
		i++;                // on incremente à chaque tour 
	}
	dup[i] = '\0';         // on oublie pas le backslash 0 pour finir la chaine de carractere
	return (dup);          // et on return le pointeur vers la copie 
}
