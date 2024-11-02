/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oeddamou <oeddamou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 08:15:32 by oeddamou          #+#    #+#             */
/*   Updated: 2024/11/01 16:45:45 by oeddamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	size_t	i;

	i = 0;
	if (size * count == 0)
		return (malloc (0));
	else
	{
		p = malloc(size * count);
		if (p == NULL)
			return (NULL);
		while (i < count * size)
		{
			p[i] = '\0';
			i++;
		}
	}
	return ((void *)p);
}
