#include <unistd.h>
int main(int ac, char **av)
{
    if (ac == 2)
    {
        while (*av[1])
        {
            if (*av[1] == 'z')
            {
                write(1, "z\n", 2);
                return (0);
            }
            av[1]++;
        }
		write(1, "z\n", 2);
    }
    else
    {
        write(1, "z\n", 2);
    }
    return (0);
}
