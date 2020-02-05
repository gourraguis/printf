/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_decimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 12:09:23 by agourrag          #+#    #+#             */
/*   Updated: 2020/02/05 12:55:03 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_decimal(int n, t_var *var)
{
	int len;
	int sign;
	int i;

	len = ft_strlen(ft_itoa(n));
	sign = (n < 0 && var->flag == '0') ? -1 : 1;
	i = 0;
	if (var->flag == '0')
		ft_putchar('-');
	if (var->flag == '-')
		ft_putnbr(n * sign);
	while (i < var->width - len)
	{
		if (!var->flag || var->flag == '-')
			ft_putchar(' ');
		else
			ft_putchar(var->flag);
		i++;
	}
	if (var->flag != '-')
		ft_putnbr(n * sign);
	return (i + len);
}
