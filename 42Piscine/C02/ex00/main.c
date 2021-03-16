#include <unistd.h>

char *ft_strcpy(char *dest, char *src);

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i = 0;
		char *b;
		b = ft_strcpy(argv[1], argv[2]);
		while (b[i])
			i++;
		write(1, b, i);
	}
	return 0;
}

