/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaldeta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 16:55:48 by mvaldeta          #+#    #+#             */
/*   Updated: 2020/11/11 19:24:31 by mvaldeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define STDIN_FILENO
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

/*int		main(void)
{
	char fd;
	char bf[1];
	int i;
	
	fd = open(0 ,O_RDONLY);
	i = 0;
	while((read(fd, bf, 1)) > 0)
	{
		write(1, &fd, 1);
		i++;
	}
}
*/

#include <stdio.h>   // printf(), STDIN_FILENO. perror()
#include <unistd.h>  // read(), exit(), EXIT_FAILURE

#define MAX_READ_LEN 1000

int main( void)
{
    char buff[ MAX_READ_LEN+1 ];
    int output = 0;
        // Round 1
        ssize_t bytesRead = read( STDIN_FILENO, buff, MAX_READ_LEN );

        while (bytesRead !='\0')
		{
			if (!(STDIN_FILENO = malloc(sizeof(char) * (MAX_READ_LEN + 1))))
		return (NULL);

		}

		if( 0 > bytesRead )
        {
            perror( "read failed" );
            exit( EXIT_FAILURE );
        }

        // success

        buff[ bytesRead ] = '\0';
        output++;
        printf("%s", buff);

    return 0;
} // end function: main
