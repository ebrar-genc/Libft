/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <egenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:00:22 by egenc             #+#    #+#             */
/*   Updated: 2022/02/06 16:13:40 by egenc            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
void	del(void *cont)
{
	char	*a;
	int		i;

	i = 0;
	a = (char *)malloc(sizeof(char *));
	a = (char *)cont;
	printf("%s\n*********************\n", a);
	while (a[i] != '\0')
	{
		a[i] = 'Q';
		i++;
		printf("%s", a);
	}
	printf("\n%s", a);
}
int	main(void)
{
	t_list	*lst;
	t_list	*a;
	t_list	*b;
	t_list	*c;
	lst = (t_list *)malloc(sizeof(t_list));
	a = (t_list *)malloc(sizeof(t_list));
	b = (t_list *)malloc(sizeof(t_list));
	c = (t_list *)malloc(sizeof(t_list));
	lst->content = "malasaha";
	a->content = "eguler";
	b->content = "agunes";
	c->content = "egenc";
	lst->next = a;
	a->next = b;
	b->next = c;
	while (lst != NULL)
	{
		ft_lstdelone(lst, del);
		lst = lst->next;
	}
}*/
