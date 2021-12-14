/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinbi- <azinbi-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 22:56:58 by azinbi-           #+#    #+#             */
/*   Updated: 2021/12/14 03:55:05 by azinbi-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int num, int *len)
{
	if (num == INT_MIN)
	{
		write(1, "-2147483648", 11);
		*len += 11;
		return ;
	}
	if (num < 0)
	{
		num = num * -1;
		ft_putchar('-', len);
	}
	if (num < 10)
	{
		ft_putchar(num + '0', len);
	}
	else
	{
		ft_putnbr(num / 10, len);
		ft_putnbr(num % 10, len);
	}
}
