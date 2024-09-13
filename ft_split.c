/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egenc <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:01:47 by egenc             #+#    #+#             */
/*   Updated: 2022/02/06 14:40:37 by egenc            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	howmanycut(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*copyit(char *newstr, const char *s, int i, int len)
{
	int	j;

	j = 0;
	while (len > 0)
	{
		newstr[j] = s[i - len];
		len--;
		j++;
	}
	newstr[j] = '\0';
	return (newstr);
}

static void	*splitit(char **newstr, char const *s, char c, int howmany)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = 0;
	while (j < howmany)
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		while (s[i] != '\0' && s[i] != c)
		{
			i++;
			len++;
		}
		newstr[j] = (char *)malloc(sizeof(char) * (len + 1));
		if (!newstr[j])
			return (NULL);
		copyit(newstr[j], s, i, len);
		j++;
		len = 0;
	}
	newstr[j] = NULL;
	return (newstr[j]);
}

char	**ft_split(char const *s, char c)
{
	int		howmany;
	char	**newstr;

	if (s)
	{
		howmany = howmanycut(s, c);
		newstr = (char **)malloc(sizeof(char *) * (howmany + 1));
		if (!newstr)
			return (NULL);
		splitit(newstr, s, c, howmany);
		return (newstr);
	}
	return (0);
}
/*
int main()
{
	char *s;
	char **a;
	s = "ebrar genc eyup semih ";
	a = ft_split(s, ' ');
	for (size_t i = 0; i < 4; i++)
		printf("%s\n",a[i]);
	//s stringini c karakteri olan yerlerden böl
	//artik yeni s stringi bolunen kadar indexte sahip olur
}*/
