/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <egenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:58:03 by egenc             #+#    #+#             */
/*   Updated: 2022/02/05 15:51:29 by egenc            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*
int	main()
{
	t_list	*lst;
	t_list	*a;
	t_list	*b;
	t_list	*c;

	lst = (t_list *)malloc(sizeof(t_list));
	a = (t_list *)malloc(sizeof(t_list));
	b = (t_list *)malloc(sizeof(t_list));
	c = (t_list *)malloc(sizeof(t_list));
	lst->content = "lst";
	a->content = "aa";
	b->content = "bb";
	c->content = "cc";
	lst->next = a;
	a->next = b;
	b->next = c;
	printf("%d", ft_lstsize(lst));
}*/
