#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int arr[13] = {4, 3, 7, 10, 9, 0, 2, 5, 8, 6, 1, 11, 5};
	ft_sort_int_tab(arr, 13);
	for (int i = 0; i < 13; i++)
	{
		printf("%i", arr[i]);
	}
 	 return (0);
}
