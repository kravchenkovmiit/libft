/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 11:42:45 by hvalenci          #+#    #+#             */
/*   Updated: 2019/09/14 11:58:23 by hvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;

	res = ft_strchr(s, c);
	if (res == NULL)
		return (NULL);
	while (*res && ft_strchr(s, c))
	{
		res = ft_strchr(s, c);
		res++;
	}
	return (res);
}
