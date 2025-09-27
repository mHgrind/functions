// Exemples de déclaration et initialisation d'un tableau

int T1[5] = {3,18,47,7,304};
int T2[5] = {};  // tableau de 5 int donc mon tableau vaut 5 zéros (0, 0, 0, 0, 0)
int T3[5] = {3, 16};  // mon tableau vaut 3, 16, 0, 0, 0
int T4[] = {3, 18, 45, 2, 231}; // ici vu que j'ai pas preciser la taille le compilateur devine directement la taile du tableau. 

// Accéder aux éléments d'un tableau

// Syntaxe d'affection : nom_tab [indice] = Valeur;
// tab[indice] = valeur; 


// Syntaxe lecture: scanf("%...", &nom_tab[indice]);



// Syntaxe écriture: printf("%...", nom_tab[indice]);
// printf("%...", tab[indice]);
// write(1, &tab[indice], 1); // en respectant la norme 42
