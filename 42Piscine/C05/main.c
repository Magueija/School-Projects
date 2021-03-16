#include <stdio.h>

int ft_iterative_factorial(int nb);
int ft_recursive_factorial(int nb);
int ft_iterative_power(int nb, int power);
int ft_recursive_power(int nb, int power);
int ft_fibonacci(int index);
int ft_sqrt(int nb);
int ft_is_prime(int nb);
int ft_find_next_prime(int nb);
int ft_ten_queens_puzzle(void);

int main()
{
	printf("\nEx00: %i\n", ft_iterative_factorial(0));
	printf("\nEx01: %i\n", ft_recursive_factorial(0));
	printf("\nEx02: %i\n", ft_iterative_power(-1, 1));
	printf("\nEx03: %i\n", ft_recursive_power(3, 3));
	printf("\nEx04: %i\n", ft_fibonacci(6));
	printf("\nEx05: %i\n", ft_sqrt(2147483647));
	printf("\nEx06: %i\n", ft_is_prime(-1677));
	printf("\nEx07: %i\n", ft_find_next_prime(2147483647));

	printf("\nEx08:\n");
	printf("\nEx08: %i\n", ft_ten_queens_puzzle());

	printf("\n");
	return 0;
}
