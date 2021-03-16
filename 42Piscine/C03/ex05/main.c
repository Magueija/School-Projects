#include <string.h>

#include <stdio.h>
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char s1[100] = "Alua";
	char s2[100] = "Alua";
	char s3[] = "forTeste";
	

	printf("Result: %d", ft_strlcat(s1, s3, 10));
	printf("\nCerto: %s", s1);
	printf("\nCerto: %lu", strlcat(s2, s3, 10));
	printf("\nCerto: %s", s2);
	return 0;
}
