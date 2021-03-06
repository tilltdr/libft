/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abso.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-roqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:49:15 by tde-roqu          #+#    #+#             */
/*   Updated: 2016/03/21 15:23:13 by tde-roqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_abso(int a)
{
	unsigned int	n;

	if (a == -2147483648)
		n = 2147483648;
	else if (a < 0)
		n = -a;
	else
		n = a;
	return (n);
}
