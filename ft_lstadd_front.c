/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <egenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:21:04 by egenc             #+#    #+#             */
/*   Updated: 2022/02/06 12:34:34 by egenc            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
int	main()
{
	t_list 	**lst;
	t_list	*new;
	t_list	*a;
	t_list	*b;
	t_list	*c;
	
	a = (t_list *)malloc(sizeof(t_list));
	b = (t_list *)malloc(sizeof(t_list));
	c = (t_list *)malloc(sizeof(t_list));
	new = (t_list *)malloc(sizeof(t_list));
	new->content = "ebrar";
	new->next = NULL;
	a->content = "mert";
	b->content = "alasahan";
	c->content = "okey";
	lst = &a;
	a->next = b;
	b->next = c;
	c->next = NULL;
	ft_lstadd_front(lst, new);
	printf("%s", a->content);
}*/
