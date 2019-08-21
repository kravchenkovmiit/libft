#include "test.h"

void	all_tests (char *str)
{
	// test tolower
	ft_putstr("test string: ");
	ft_putstr(str);
	ft_putchar('\n');
	ft_putchar('\n');
	if (ft_tolower(str[0]) == tolower(str[0]))
		ft_putstr("FT_tolower OK\n");
	else
		ft_putstr("FT_tolower KO KO KO\n");
	ft_putchar('\n');

	ft_putstr("test number: 33\n");
	if (ft_tolower(33) == tolower(33))
		ft_putstr("FT_tolower OK\n");
	else
		ft_putstr("FT_tolower KO KO KO\n");
	ft_putchar('\n');

	// test toupper
	if (ft_toupper(str[0]) == toupper(str[0]))
		ft_putstr("FT_toupper OK\n");
	else
		ft_putstr("FT_toupper KO KO KO\n");
	ft_putchar('\n');

	if (ft_toupper(33) == toupper(33))
		ft_putstr("FT_toupper OK\n");
	else
		ft_putstr("FT_toupper KO KO KO\n");
	ft_putchar('\n');

	// test isalpha 
	if (ft_isalpha(str[0]) == isalpha(str[0]))
		ft_putstr("FT_isalpha OK\n");
	else if (ft_isalpha(str[0]) > 0 && isalpha(str[0]) > 0)
		ft_putstr("FT_isalpha OK\n");
	else
		ft_putstr("FT_isalpha KO KO KO\n");
	ft_putchar('\n');
	
	// test isdigit 
	if (ft_isdigit(str[0]) == isdigit(str[0]))
		ft_putstr("FT_isdigit OK\n");
	else if (ft_isdigit(str[0]) > 0 && isdigit(str[0]) > 0)
		ft_putstr("FT_isdigit OK\n");
	else
		ft_putstr("FT_isdigit KO KO KO\n");
	ft_putchar('\n');

	ft_putstr("test number: 9\n");
	if (ft_isdigit(9) == isdigit(9))
		ft_putstr("FT_isdigit OK\n");
	else
		ft_putstr("FT_isdigit KO KO KO\n");
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
