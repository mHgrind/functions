#include <unistd.h>
int		main(int ac, char **av)
{
	if (ac > 1)       // si au moins 1 argument
		while (*av[1])  // la il parcourt la chaine 
			write(1, av[1]++, 1);  // on écrit et on avance le pointeur
	write(1, "\n", 1); // fin de ligne obligatoire
	return (0);
}