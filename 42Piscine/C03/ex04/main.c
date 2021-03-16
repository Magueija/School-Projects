#include <string.h>

#include <stdio.h>
char *ft_strstr(char *str, char *to_find);

int main()
{

	char s3[] = "GeeksforGeeks";
	char s4[] = "";
	printf("Certo: %s\n", strstr(s3, s4));

	char s1[] = "GeeksforGeeks";
	char s2[] = "";

	printf("Result: %s", ft_strstr(s1, s2));
}
