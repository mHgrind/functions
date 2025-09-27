#include <unistd.h>

int	main(int ac, char **av)
{
	unsigned char	seen[256] = {0};
	int				i, j;
	char			c;

	if (ac != 3)
		return (write(1, "\n", 1), 0);
	i = 0;
	while (av[1][i])
	{
		c = av[1][i];
		/* vérifier si c existe dans av[2] */
		j = 0;
		while (av[2][j] && av[2][j] != c)
			j++;
		if (av[2][j] && !seen[(unsigned char)c])
		{
			write(1, &c, 1);
			seen[(unsigned char)c] = 1;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
