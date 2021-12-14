/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinbi- <azinbi-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 02:59:57 by azinbi-           #+#    #+#             */
/*   Updated: 2021/12/14 03:37:00 by azinbi-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned long num, char base, int *len)
{
	char	*base_d;

	if (base == 'x')
		base_d = "0123456789abcdef";
	else if (base == 'X')
		base_d = "0123456789ABCDEF";
	if (num < 0)
		ft_putchar('-', len);
	if (num < 16)
		ft_putchar(base_d[num], len);
	else
	{
		ft_putnbr_base((num / 16), base, len);
		ft_putchar(base_d[num % 16], len);
	}
}
