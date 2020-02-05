/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_var.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 10:25:52 by agourrag          #+#    #+#             */
/*   Updated: 2020/02/05 13:29:39 by agourrag         ###   ########.fr       */
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
	// print string
	// print pointer
	else
		return (0);

	// todo: this isn't working cause we returning before. Maybe the global solution is good after all (create list, add to it, free it at the end)
	// add pointers to the list once assigned, la7a9ache one var could hold multiple pointers over its lifetime et ga3 khasshom yt free
	if (var)
		free(var);
}
