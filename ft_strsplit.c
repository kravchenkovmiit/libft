/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 20:00:46 by hvalenci          #+#    #+#             */
/*   Updated: 2019/09/16 20:58:15 by hvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_counter(char const *s, char c)
{
	while (*s && *s != c)
		s++;
	if (*s == '\0')
		return (0);
	while (*s && *s == c)
		s++;
	if (*s == '\0')
		return (0);
	return(1 + ft_counter(s, c));
}

static	char	*ft_addstringtoarr(char *fresh, char const *s)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	fresh[j] = ft_strnew(i);
	if (fresh == NULL)
	{
		ft_arrdel(fresh, j);
		return (NULL);
	}
	fresh[j] = ft_strncpy(s, i);
	s += i;
	return (s);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t	strnum;
	char	**fresh;
	size_t	j;

	if (c == '\0' || s == NULL || *s == '\0')
		return (NULL);
	strnum = 0;
	j = 0;
	if (*s != c)
		strnum = 1;
	strnum += ft_counter(s, c);
	fresh = ft_arrnew(strnum);
	if (fresh == NULL)
		return (NULL);
	while (strnum--)
	{
		if (*s != c)
		{
			s = ft_addstringtoarr(fresh[j], s);
			if (s == NULL)
				return (NULL);
			j++;
		}
		while (*s == c)
			s++;
	}
	return (fresh);
}
