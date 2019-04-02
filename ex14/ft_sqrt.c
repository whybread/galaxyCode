/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrandpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 12:45:02 by tgrandpa          #+#    #+#             */
/*   Updated: 2019/04/02 12:45:03 by tgrandpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_sqrt(int nb)
{
	int 	sqrt;
	int		x;

	if (nb < 0)
		return (0);
	x = 0;
	sqrt = 0;
	while (x * x <= nb)
	{
		if (x * x == nb)
		{
			sqrt = x;
			break ;
		}
		x++;
	}
	return (sqrt);
}