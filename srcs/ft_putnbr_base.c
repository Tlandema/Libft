/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlandema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 09:54:51 by tlandema          #+#    #+#             */
/*   Updated: 2019/08/07 09:58:47 by tlandema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(int n, char *str)
{
	long	l;
	int		len;

	len = ft_strlen(str);
	l = n;
	if (l < 0)
	{
		ft_putchar('-');
		l = -l;
	}
	if (l > len)
		ft_putnbr_base(l / len, str);
	ft_putchar(str[l %len]);
}
