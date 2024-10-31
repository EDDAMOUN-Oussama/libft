/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oeddamou <oeddamou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:03:57 by oeddamou          #+#    #+#             */
/*   Updated: 2024/10/31 21:04:47 by oeddamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*t;
	t_list	*l;
	void	*c;

	if (lst == NULL)
		return (NULL);
	l = NULL;
	while (lst)
	{
		c = f(lst->content);
		t = ft_lstnew(c);
		if (!t)
		{
			del(c);
			ft_lstclear(&l, del);
			return (NULL);
		}
		ft_lstadd_back(&l, t);
		lst = lst->next;
	}
	return (l);
}
