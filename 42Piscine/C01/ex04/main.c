#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int div = 25;
	int mod = 10;

	ft_ultimate_div_mod(&div, &mod);

	char d = div + '0';
	char m = mod + '0';

	write(1, &d, 1);
	write(1, "\n", 1);
	write(1, &m, 1);
	return (0);
}
