#include <unistd.h>

void ft_write_upper(char c)
{
    int r;

    r = c - 64;
    while (r >= 1)
    {
        write(1, &c, 1);
        r--;
    }
}

void ft_write_lower(char c)
{
    int r;

    r = c - 96;
    while (r >= 1)
    {
        write(1, &c, 1);
        r--;
    }
}

int main(int argc, char *argv[])
{
    int i;

    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    i = 0;
    while (argv[1][i])
    {
        if (argv[1][i] >= 65 && argv[1][i] <= 90)
            ft_write_upper(argv[1][i]);
        else if (argv[1][i] >= 97 && argv[1][i] <= 122)
            ft_write_lower(argv[1][i]);
        else
            write(1, &argv[1][i], 1);
        i++; 
    }
    write(1, "\n", 1);
    return (0);
}