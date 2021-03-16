#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char s1[] = "e fixe";
	char s2[100] = "Tomas, ";
	char s3[100] = "Tomas, ";
	

	printf("Result: %s", ft_strncat(s2, s1, 5));
	printf("\nCerto: %s", strncat(s3, s1, 5));
}
