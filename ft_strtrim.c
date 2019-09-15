
#include "libft.h"

static int	ft_skipwspcs(char const *s)
{
	size_t	i;

	i = 0;
	while(s[i] || s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	return (i);
}

static int	ft_skipbwspcs(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	if (i == 0)
		return (0);
	i--;
	while (i || s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i--;
	return (i + 1);
}

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	char	*fresh;

	if (s == NULL)
		return (NULL);
	start = ft_skipwspcs(s);
	if (s[start] == '\0')
	{
		fresh = ft_strnew(0);
		if (fresh == NULL)
			return (NULL);
		return (fresh);
	}
	end = ft_skipbwspcs(s + start);
	fresh = ft_strnew(start - end);
	if (fresh == NULL)
		return (NULL);
	return (ft_strncpy(fresh, s + start, (end - start) + 1));
}
