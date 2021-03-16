#include <unistd.h>

int ft_str_is_printable(char *str);

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		char c[2] = "\n";

		char str1 = ft_str_is_printable(c) + '0';
		char str2 = ft_str_is_printable(argv[2]) + '0';
		write(1, &str1, 1);
		write(1, &str2, 1);
	}

	return 0;
}
