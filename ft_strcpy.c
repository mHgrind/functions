#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';      // très important : terminer la chaîne
    return (s1);       // on retourne la destination
}

int main(void)
{
    char dest[10] = "mH";
    char src[] = "grind";

    printf("%s\n", ft_strcpy(dest, src));
    return (0);
}
