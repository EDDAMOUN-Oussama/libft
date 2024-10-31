/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oeddamou <oeddamou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:14:10 by oeddamou          #+#    #+#             */
/*   Updated: 2024/10/29 21:08:51 by oeddamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	s = (unsigned char *) src;
	d = (unsigned char *) dst;
	if (s == d)
		return (dst);
	if (dst < src && len > 0)
		ft_memcpy(dst, src, len);
	else
	{
		i = len;
		while (i)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	return (dst);
}
