/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 11:53:33 by agourrag          #+#    #+#             */
/*   Updated: 2020/02/05 12:04:21 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_char(char c, t_var *var)
{
	int i;

	if (var->flag == '-')
		ft_putchar(c);
	i = 0;
	while (i < var->width - 1)
	{
		if (!var->flag || var->flag == '-')
			ft_putchar(' ');
		else
			ft_putchar(var->flag);
		i++;
	}
	if (var->flag != '-')
		ft_putchar(c);
	return (i + 1);
}
