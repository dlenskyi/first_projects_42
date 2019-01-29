/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlenskyi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 18:46:41 by dlenskyi          #+#    #+#             */
/*   Updated: 2018/10/22 19:36:00 by dlenskyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;
	int buf;

	buf = 1;
	i = 1;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		while (buf < nb)
		{
			buf = i * i;
			i++;
		}
		i--;
		if (buf != nb)
			return (0);
	}
	return (i);
}