#include <unistd.h>

int ft_strlen(char *str);

int main()
{
	char c[9] = "Magueija";

	int num = ft_strlen(c);

	char a = num + '0';

	write(1, &a, 1);
	return (0);
}
