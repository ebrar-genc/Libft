/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <egenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:16:11 by egenc             #+#    #+#             */
/*   Updated: 2022/02/06 16:15:26 by egenc            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;

	if (!lst || !f)
		return (NULL);
	node = ft_lstnew(f(lst->content));
	if (!node)
	{
		del(&lst->content);
		node = ft_lstmap(lst->next, f, del);
	}
	else
	{
		node->next = ft_lstmap(lst->next, f, del);
	}
	return (node);
}
