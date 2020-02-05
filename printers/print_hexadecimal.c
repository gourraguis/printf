/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexadecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 13:02:16 by agourrag          #+#    #+#             */
/*   Updated: 2020/02/05 19:44:47 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	set_uppercase(char *str)
{
	while (str)
	{
		*str = ft_toupper(*str);
		str++;
	}
}

int	print_hexadecimal(long n, t_var *var)
{
	char	*output;
	int		len;
	int		i;

	output = ft_itoa_base(n, 16);
	if (var->type == 'X')
		set_uppercase(output);
	len = ft_strlen(output);
	if (var->flag == '-')
		ft_putstr(output);
	i = 0;
	while (i < var->width - len)
	{
		if (!var->flag || var->flag == '-')
			ft_putchar(' ');
		else
			ft_putchar(var->flag);
		i++;
	}
	if (var->flag != '-')
		ft_putstr(output);
	ft_lstadd_back(&g_allocs, ft_lstnew(output));
	return (i + len);
}
