#include <stdio.h>

int ft_atoi(char *str);

int main()
{
	char str[] =   " ---+--+1234ab567";
	printf("%i", ft_atoi(str));

	return 0;
}
