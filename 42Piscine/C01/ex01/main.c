#include <unistd.h>

void	ft_ultimate_ft(int ********nbr);

int main()
{
	int i = 0;
	int *a = &i;
	int **b = &a;
	int ***c = &b;
	int ****d = &c;
	int *****e = &d;
	int ******f = &e;
	int *******g = &f;

	ft_ultimate_ft(&g);
	char ch = i + '0';
	write(1, &ch, 1);
	return (0);
}
