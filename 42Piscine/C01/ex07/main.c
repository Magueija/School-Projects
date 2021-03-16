#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main()
{
	int  c[14] = {11, 10, 9, 8, 3, 6, 5, 4, 3, 2, 1, 0, -1, -2};

	ft_rev_int_tab(c, 14);
	for(int i = 0; i < 14; i++) {
		printf("%i", c[i]);
	}
	return (0);
}
