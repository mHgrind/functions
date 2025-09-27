#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void)
{
    int a = 50;
    int b = 100;

    ft_swap(&a, &b);
    printf("A est maintenant egal à = %d, et le B %d\n", a, b);
    return 0;
}