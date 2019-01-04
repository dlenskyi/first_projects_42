/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_strsplit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlenskyi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/29 14:40:53 by dlenskyi          #+#    #+#             */
/*   Updated: 2018/12/29 14:40:58 by dlenskyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_del_strsplit(char **str)
{
	size_t i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}