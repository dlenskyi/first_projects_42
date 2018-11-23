/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlenskyi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 18:50:12 by dlenskyi          #+#    #+#             */
/*   Updated: 2018/10/26 18:50:18 by dlenskyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*b1;
	char	*str;

	if (!s1)
		return (NULL);
	i = 0;
	b1 = (char *)s1;
	str = ((char*)malloc(sizeof(*str) * (ft_strlen(s1) + 1)));
	if (str == NULL)
		return (NULL);
	return (ft_strcpy(str, b1));
}
