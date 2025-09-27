#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int	ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    // 1. Je m'occupe des espaces, tabs etc...
    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    // 2. Je m'occupe du signe 
        if(str[i] == '-' || str[i] == '+')
        {
            if (str[i] == '-')
            sign = -1;
        i++;
        }
    // 2. Et la le coeur du programme cest la conversion.
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 +(str[i] - '0');
        i++;
    }
    return(result * sign);
}

int		main(void)
{
	printf("%d\n", ft_atoi("-123456789"));
	printf("%d\n", atoi("-+123456789"));
	return (0);
}