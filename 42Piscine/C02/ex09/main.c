#include <stdio.h>

char *ft_strcapitalize(char *str);
int main(int argc, char **argv)
{
	char e[] = " @F!";
	char f[] = " @f!hince*njd^ wbub 234iub qib123bi";
	char g[] = "@f!Is4:B/!<Yjan>E&M<Kk*Jv4']*'A@U#L6$";
	char h[] = "@x[[?Fszn)H5f~^Y 9^&U.Rz@Iatdp{]74tz$";
	char i[] = "tZv+W<-Txy;O$'A1 B`N$@Zu+X0$H$";

	printf("===== Ex08\n");
	printf("%s \n\n", ft_strcapitalize(e));
	printf("%s \n\n", ft_strcapitalize(f));
	printf("%s \n\n", ft_strcapitalize(g));
	printf("%s \n\n", ft_strcapitalize(h));
	printf("%s \n\n", ft_strcapitalize(i));


	return 0;
}
