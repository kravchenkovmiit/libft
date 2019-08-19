#include "test.h"

void	all_tests (char *str)
{
	ft_putstr("test string: ");
	ft_putstr(str);
	ft_putchar('\n');
	ft_putstr("FT_tolower\t");
	ft_putchar(ft_tolower(str[0]));
	ft_putchar('\n');
	ft_putstr("ST_tolower\t");
	ft_putchar(tolower(str[0]));
	ft_putchar('\n');

	ft_putstr("test number: 33\n");
	ft_putstr("FT_tolower\t");
	ft_putchar(ft_tolower(33));
	ft_putchar('\n');
	ft_putstr("ST_tolower\t");
	ft_putchar(tolower(33));
	ft_putchar('\n');
}

void	main (int av, char **ac)
{
	if (av == 2)
		all_tests(ac[1]);
	else if (av == 3)
	{
		ft_putstr("Don't forget fix it later..\n");
	}
}
