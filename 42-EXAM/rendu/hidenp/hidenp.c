#include <unistd.h>

int main (int argc, char **argv)
{
	int i = 0;
	int l = 0;
	int tmp = 0;

	if(argc != 2)
	{
		write(1, "\n", 1);
		return 0;
	}

	while(argv[1][l] != '\0')
	{
		l++;
	}

	while(argv[1][i] != '\0')
	{
		if(argv[1][l] == argv[2][i])
		{
			tmp++;
		}
		else
		{
			i++;
		}
		if(l == tmp)
		{
			write(1, "1", 1);
		}
		else
			write(1, "0", 1);
		
	}

}