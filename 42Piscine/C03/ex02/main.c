#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main()
{
	char s1[] = "e fixe";
	char s2[100] = "Tomas, ";
	char s3[100] = "Tomas, ";
	

	printf("Result: %s", ft_strcat(s2, s1));
	printf("\nCerto: %s", strcat(s3, s1));
}
