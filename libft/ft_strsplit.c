/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlenskyi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 17:17:35 by dlenskyi          #+#    #+#             */
/*   Updated: 2018/10/29 17:17:36 by dlenskyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		counter(const char *s, char c)
{
	int		b;
	char	*s1;
	int		r;

	b = 0;
	r = 0;
	s1 = (char *)s;
	if (!s || !c)
		return (0);
	while (s1[b])
	{
		while (s1[b] == c)
		{
			if (!s1[b + 1])
				return (r);
			b++;
		}
		r++;
		while (s1[b] != c && s1[b])
			b++;
	}
	return (r);
}

static char		*remove_del(const char *str, size_t *t, char c)
{
	char	*s1;
	size_t	j;
	size_t	size;

	j = 0;
	s1 = (char *)str;
	while (s1[*t] == c)
		*t += 1;
	j = *t;
	while (s1[*t])
	{
		if (s1[*t] == c)
			break ;
		*t = *t + 1;
	}
	size = *t - j;
	return (ft_strsub(s1, j, size));
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	char	*s1;
	char	**res;
	int		len;
	size_t	j;

	s1 = (char *)s;
	i = 0;
	j = 0;
	i = 0;
	len = counter(s1, c);
	res = (char **)malloc(sizeof(char *) * (len + 1));
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = remove_del(s1, &j, c);
		i++;
	}
	res[i] = 0;
	return (res);
}
