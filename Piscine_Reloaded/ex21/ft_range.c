/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlenskyi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 21:24:50 by dlenskyi          #+#    #+#             */
/*   Updated: 2018/10/23 20:09:18 by dlenskyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int i;
	int size;
	int *arr;

	i = 0;
	if (min >= max)
		return (0);
	size = max - min;
	arr = (int*)malloc(sizeof(*arr) * size);
	if (arr == 0)
		return (0);
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

int		main(void)
{
	int *a;

	a = ft_range(1, 9);
	while (*a)
	{
		printf("%d", *a);
		a++;
	}
	return (0);
}
