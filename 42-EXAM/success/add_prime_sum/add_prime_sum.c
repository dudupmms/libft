#include <unistd.h>

int	mini_atoi(char *str)
{
	int i = 0;
	int res = 0;

	if (str[i] == '-')
		return (0);
	while (str[i])
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res);
}

void	putnbr(int num)
{
	char res;

	if (num >= 10)
		putnbr(num / 10);
	res = num % 10 + '0';
	write(1, &res, 1);
}

int found_prime(int prime)
{
	int i = 2;

	while (i * i <= prime)
	{
		if (prime % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int num = mini_atoi(av[1]);
		int prime = 2;
		int res = 0;

		while (prime <= num)
		{
			if (found_prime(prime))
				res += prime;
			prime++;
		}
		putnbr(res);
	}
	else
		write (1, "0", 1);
	write (1, "\n", 1);
}