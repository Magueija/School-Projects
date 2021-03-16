#include <unistd.h>

int ft_str_is_uppercase(char *str);

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		char str1 = ft_str_is_uppercase(argv[1]) + '0';
		char str2 = ft_str_is_uppercase(argv[2]) + '0';
		write(1, &str1, 1);
		write(1, &str2, 1);
	}

	return 0;
}
