/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <egenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:15:16 by egenc             #+#    #+#             */
/*   Updated: 2022/02/06 16:14:57 by egenc            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void	f(void *b)
{
	char	*a;
	int i;

	a = (char *)b;
	i = 0;
	//fonkun icerigini degistirmemize izin yok
	while (a[i] != '\0')
	{
		//printf("%c", a[i]);
		printf("%c", a[i]-32);
		i++;
	}
}

int main(void)
{
	t_list	*a;
	char	*p;

	p = (char *)malloc(5);
	p = "iteriteri";
	a = (t_list *)malloc(sizeof(t_list));
//	a->content = "content li icerik verirsek sadece read only";
	a->content = p;
//	contenti bellekteki bir alan olarak gosterirsek, fonka mudahele yapabiliriz.
	printf("%s", a->content);
	ft_lstiter(a, f);
//	lstiter benim bagli fonksiyonumun her bir nodeuna istenilen fonku uygular
}*/
