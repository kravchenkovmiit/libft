/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 18:46:38 by hvalenci          #+#    #+#             */
/*   Updated: 2019/09/18 18:56:41 by hvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_arrdel(char **arr, size_t len)
{
	size_t	i;

	i = 0;
	while (len--)
		free(arr[i++]);
	free(arr);
}
