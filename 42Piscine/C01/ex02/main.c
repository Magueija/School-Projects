#include <unistd.h>

void	ft_swap(int *a, int *b);

int main()
{
	int a = 5;
	int b = 2;
	ft_swap(&a, &b);
	char ca = a + '0';
	char cb = b + '0';
	write(1, &ca, 1);
	write(1, &cb, 1);
	return (0);
}
