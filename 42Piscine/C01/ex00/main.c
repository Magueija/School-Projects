#include <unistd.h>

void ft_ft(int *nbr);

int main()
{
	int i = 4;
	ft_ft(&i);
	char c = i + '0';
	write(1, &c, 1);
	return (0);
}
