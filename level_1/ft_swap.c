#include <stdio.h>
void    ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void)
{
    int x = 42;
    int y = 24;

    printf("Antes del swap:\n");
    printf("x: %d, y: %d\n", x, y);
    printf("--- Intercambiando... ---\n");
    ft_swap(&x, &y);
    printf("Después del swap:\n");
    printf("x: %d, y: %d\n", x, y);
    return (0);
}