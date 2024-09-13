/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <egenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:14:44 by egenc             #+#    #+#             */
/*   Updated: 2022/02/06 12:38:58 by egenc            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}
/*
void	del(void *b)
{
	free(b);	
}

int	main(void)
{
	t_list	**liste;
	t_list	*a;

	a = (t_list *)malloc(sizeof(t_list));
	liste = &a;
	a->content = "ebrar";
	ft_lstclear(liste, del);
	//tekrar
}*/
