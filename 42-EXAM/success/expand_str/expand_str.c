#include <unistd.h>

int main(int ac, char **av)
{
	int		strlen;
	int		i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] == ' ' || av[1][i] == 9)
			i++;
		while (av[1][i])
		{
			if (av[1][i] == ' ' || av[1][i] == 9)
			{
				while (av[1][i] == ' ' || av[1][i] == 9)
					i++;
				if (!av[1][i])
					break ;
				i--;
				while (av[1][i] == ' ' || av[1][i] == 9)
					i--;
				i++;
				write (1, " ", 1);
				write (1, " ", 1);
				write (1, " ", 1);
				while (av[1][i] == ' ' || av[1][i] == 9)
					i++;
			}
			if (av[1][i])
			{
				write (1, &av[1][i], 1);
				i++;
			}
		}
		write (1, "\n", 1);
	}
	else
		write (1, "\n", 1);
}
