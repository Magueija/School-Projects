#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int		*ft_range(int min, int max);

int		ft_ultimate_range(int **range, int min, int max);

//char	*ft_strjoin(int size, char **strs, char *sep);

void	debug_dump_array(int numbers[], int size)
{
	int index;

	printf("[ ");
	index = 0;
	while (index < size)
	{
		printf("%d", numbers[index]);
		if (index != size - 1)
		{
			printf(", ");
		}
		index++;
	}
	printf(" ]");
}

int main(){
	

	printf("\n******************\nEx00:\n\n");
	char	*str;
	char	*allocated;

	str = "Hello World with malloc()";
	printf("x  : base  : $%s$\n", str);
	allocated = ft_strdup(str);
	printf("c  : alloc : $%s$\n", allocated);
	allocated = ft_strdup(str);
	printf("ft : alloc : $%s$\n", allocated);

	printf("\n\n******************\nEx01:\n\n");
	int	min;
	int	max;

	min = 5;
	max = 11;
	printf("min = %d, max = %d -> ", min, max);
	debug_dump_array(ft_range(min, max), max - min);	

	printf("\n******************\nEx02:\n\n");
	int	*range;
	int	bound;
	
	min = 5;
	max = 12;
	bound = ft_ultimate_range(&range, min, max);
	printf("min = %d, max = %d -> (bound = %d) ", min, max, bound);
	fflush(stdout);
	debug_dump_array(range, bound);


	/*printf("\n******************\nEx03:\n\n");
	int		index;
	char	**strs;
	char	*separator;
	char	*result;
	
	strs = (char**)malloc(4 * sizeof(strs));
	strs[0] = "lol";
	strs[1] = "1234";
	strs[2] = "poiuic";
	strs[3] = "1234";
	separator = " ";
	index = 0;
	while (index < 4)
	{
		result = ft_strjoin(index, strs, separator);
		printf("result with size = %d : $%s$\n", index, result);
		free(result);
		index++;
	}*/
	return (0);
}
