/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 12:54:01 by agourrag          #+#    #+#             */
/*   Updated: 2020/02/05 12:56:40 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putnbr_unsigned(unsigned int n)
{
	if (n > 9)
		ft_putnbr_fd(n / 10, 1);
	ft_putchar_fd(n % 10 + '0', 1);
}

int	print_unsigned(unsigned int n, t_var *var)
{
	int len;
	int i;

	len = ft_strlen(ft_itoa(n));
	i = 0;
	if (var->flag == '-')
		ft_putnbr_unsigned(n);
	while (i < var->width - len)
	{
		if (!var->flag || var->flag == '-')
			ft_putchar(' ');
		else
			ft_putchar(var->flag);
		i++;
	}
	if (var->flag != '-')
		ft_putnbr_unsigned(n);
	return (i + len);
}
