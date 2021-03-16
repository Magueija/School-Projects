#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	char s1[] = "abCd";
	char s2[] = "abcd";
	

	printf("%i", ft_strncmp(s1, s2, 5));
	printf("\n%i", strncmp(s1, s2, 5));
}
