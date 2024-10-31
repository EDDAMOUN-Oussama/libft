/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oeddamou <oeddamou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:12:58 by oeddamou          #+#    #+#             */
/*   Updated: 2024/10/29 08:08:02 by oeddamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_here(char const *s, char const c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i] && is_here(set, s1[i]))
		i++;
	j = (int) ft_strlen(s1);
	while (j > 0 && is_here(set, s1[j - 1]))
		j--;
	if (j <= i)
		return (ft_substr(s1, (unsigned int) i, 0));
	return (ft_substr(s1, (unsigned int) i, j - i));
}
