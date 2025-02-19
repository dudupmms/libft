#include <unistd.h>

char alpha_mirror(char c)
{

	if (c >= 'a' && c <= 'm')
	{
		c = 'z' - c;
		return (c + 'a');
	}
	if (c >= 'n' && c <= 'z')
	{
		c = c - 'a';
		return ('z' - c);
	}
	if (c >= 'A' && c <= 'M')
	{
		c = 'Z' - c;
		return (c + 'A');
	}
	if (c >= 'N' && c <= 'Z')
	{
		c = c - 'A';
		return ('Z' - c);
	}
	return (c);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		char mirror;

		while (av[1][i])
		{
			mirror = alpha_mirror(av[1][i]);
			write (1, &mirror, 1);
			i++;
		}
	}
	write (1, "\n", 1);
}