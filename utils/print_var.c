/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_var.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 10:25:52 by agourrag          #+#    #+#             */
/*   Updated: 2020/02/05 19:43:58 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_var(t_var *var, va_list args)
{
	if (var->type == 'c')
		return print_char(va_arg(args, int), var);
	else if (var->type == '%')
		return print_char('%', var);
	else if (var->type == 'd')
		return print_decimal(va_arg(args, int), var);
	else if (var->type == 'u')
		return print_unsigned(va_arg(args, int), var);
	else if (ft_strchr("xX", var->type))
		return print_hexadecimal(va_arg(args, long), var);
	else if (var->type == 's')
		return print_string(va_arg(args, char*), var);
	// print string
	// print pointer
	else
		return (0);

	ft_lstadd_back(&g_allocs, ft_lstnew(var));
}
