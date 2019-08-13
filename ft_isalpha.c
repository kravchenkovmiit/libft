#include <ctype.h>
#include <stdio.h>

int ft_isalpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int main (int ac, char **av)
{
	if (ac == 2)
	{
		printf("ft_res: \t%d\n", ft_isalpha(av[1][0]));
		printf("mac_res: \t%d\n", isalpha(av[1][0]));
	}
	return (0);
}
