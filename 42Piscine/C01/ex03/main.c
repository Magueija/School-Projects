#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int div;
	int mod;

	ft_div_mod(25, 10, &div, &mod);

	char d = div + '0';
	char m = mod + '0';

	write(1, &d, 1);
	write(1, "\n", 1);
	write(1, &m, 1);
	return (0);
}
