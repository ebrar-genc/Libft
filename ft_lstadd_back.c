/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <egenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:32:34 by egenc             #+#    #+#             */
/*   Updated: 2022/02/06 12:32:01 by egenc            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (new)
	{
		if (!*lst)
		{
			*lst = new;
			return ;
		}
		temp = ft_lstlast(*lst);
		temp->next = new;
	}
}
/*
int	main()
{
	t_list	**lst;
	t_list	*a;
	t_list	*b;
	t_list	*x;
	t_list	*c;

	a = (t_list *)malloc(sizeof(t_list));
	b = (t_list *)malloc(sizeof(t_list));
	c = (t_list *)malloc(sizeof(t_list));
	x = (t_list *)malloc(sizeof(t_list));
	a->content = "aa";
	b->content = "bb";
	x->content = "xx";
	a->next = b;
	b->next = x;
	x->next = NULL;
	lst = &a;
	c->content = "genc";
	c->next = NULL;
	ft_lstadd_back(lst, c);
	while (*lst)
	{
		printf("%s\n", (*lst)->content);
		(*lst) = (*lst)->next;
		//sirasiyla a,b,x,genc yazar
	}
}*/
