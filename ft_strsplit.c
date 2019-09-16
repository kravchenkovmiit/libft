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

char	**ft_strsplit(char const *s, char c)
{
	size_t	strnum;
	char	**fresh;

	if (c == '\0' || s == NULL || *s == '\0')
		return (NULL);
	strnum = 0;
	if (*s != c)
		strnum = 1;
	strnum += ft_counter(s, c);
	fresh = ft_arrnew(strnum);
	if (fresh == NULL)
		return (NULL);
}
