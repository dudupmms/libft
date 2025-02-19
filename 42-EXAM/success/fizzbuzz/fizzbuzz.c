#include <unistd.h>

void putnbr(int i)
{
	char res;

	if (i >= 10)
		putnbr(i / 10);
	res = i % 10 + '0';
	write (1, &res, 1);
}

int main()
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
			write (1, "fizz", 4);
		if (i % 5 == 0)
			write (1, "buzz", 4);
		if (i % 5 != 0 && i % 3 != 0)
			putnbr(i);
		i++;
		write (1, "\n", 1);
	}
}
