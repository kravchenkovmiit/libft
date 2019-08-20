#include "test.h"

void	all_tests (char *str)
{
	// test tolower
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

	// test toupper
	ft_putstr("test string: ");
	ft_putstr(str);
	ft_putchar('\n');
	ft_putstr("FT_toupper\t");
	ft_putchar(ft_toupper(str[0]));
	ft_putchar('\n');
	ft_putstr("ST_toupper\t");
	ft_putchar(toupper(str[0]));
	ft_putchar('\n');

	ft_putstr("test number: 33\n");
	ft_putstr("FT_toupper\t");
	ft_putchar(ft_toupper(33));
	ft_putchar('\n');
	ft_putstr("ST_toupper\t");
	ft_putchar(toupper(33));
	ft_putchar('\n');

	// test isalpha 
	ft_putstr("test string: ");
	ft_putstr(str);
	ft_putchar('\n');
	ft_putstr("FT_isalpha\t");
	printf("^%d", ft_isalpha(str[0]));
	ft_putchar('\n');
	ft_putstr("ST_isalpha\t");
	printf("^%d", isalpha(str[0]));
	ft_putchar('\n');
}

int	main (int av, char **ac)
{
	if (av == 2)
		all_tests(ac[1]);
	else if (av == 3)
	{
		ft_putstr("Don't forget fix it later..\n");
	}
	return (0);
}
