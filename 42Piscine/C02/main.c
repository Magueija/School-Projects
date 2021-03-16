#include <stdio.h>
#include <unistd.h>
#include <string.h>


void ft_putstr_non_printable(char *str);

int main(){

	printf("\n******************\nEx11:\n\n");
	char str20[] = "\tCoucou\ntu vas bien ?";
	printf("Str = %s\n", str20);
	ft_putstr_non_printable(str20);


	return (0);
}
