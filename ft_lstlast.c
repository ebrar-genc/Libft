/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <egenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:12:26 by egenc             #+#    #+#             */
/*   Updated: 2022/02/06 13:53:06 by egenc            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
int	main()
{
	t_list	*lst;
	t_list	*a;
	t_list	*b;
	t_list	*c;
	t_list	*d;
	
	lst = (t_list *)malloc(sizeof(t_list));
	a = (t_list *)malloc(sizeof(t_list));
	b = (t_list *)malloc(sizeof(t_list));
	c = (t_list *)malloc(sizeof(t_list));
	lst->next = a;
	a->next = b;
	b->next = c;
	c->content = "ebrarGenc";
	d = ft_lstlast(lst);
	printf("%s", d->content);
}*/
