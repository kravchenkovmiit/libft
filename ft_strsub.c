
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*fresh;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	fresh = ft_strnew(len);
	if (fresh == NULL)
		return (NULL);
	while (len--)
	{
		fresh[i] = (char)s[(start + i)];
		i++;
	}
	return (fresh);
}
