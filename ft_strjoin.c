/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <egenc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:07:13 by egenc             #+#    #+#             */
/*   Updated: 2022/02/06 14:52:57 by egenc            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*newstr;
	int		totalsize;

	if (s1)
	{
		totalsize = (ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
		newstr = (char *)malloc(sizeof(char) * totalsize);
		if (!newstr)
			return (0);
		i = 0;
		while (*s1)
			newstr[i++] = *s1++;
		while (*s2)
			newstr[i++] = *s2++;
		newstr[i] = '\0';
		return (newstr);
	}
	return (0);
}
/*
int      main()
{
	//s1in üzerine s2yi ekler
	char     *s1 = "ebrar";
	char     *s2 = "genc";
	printf("%s", ft_strjoin(s1, s2));
	// cikti: ebrargenc
}*/
