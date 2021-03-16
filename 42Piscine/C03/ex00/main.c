#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
	char s1[] = "ab";
	char s2[] = "abd";
	
	printf("%i", ft_strcmp(s1, s2));
	printf("\n%i", strcmp(s1, s2));
}
