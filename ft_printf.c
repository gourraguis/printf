/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 19:36:38 by agourrag          #+#    #+#             */
/*   Updated: 2020/02/05 19:13:02 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	debug_var(t_var *var)
{
	printf("\n\nwidth: %d\tprecision: %d\tflag: %c\ttype: %c\n\n", var->width, var->precision, var->flag, var->type);
}

void	free_list(void *content)
{
	if (content)
	{
		free(content);
		content = NULL;
	}
}

int ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;
	char	*tmp;

	g_allocs = ft_lstnew(NULL);
	va_start(args, str);
	len = 0;
	while (*str)
	{
		if (*str != '%')
			len += ft_putchar(*str);
		else
		{
			str += extract_var(str, &tmp);
			ft_lstadd_back(&g_allocs, ft_lstnew(tmp));
			// printf("\ntmp: |%s|\n", tmp);
			// debug_var(format_var(tmp, args));
			// print variable from specs and argument
			len += print_var(format_var(tmp, args), args);
		}
		str++;
	}
	va_end(args);
	ft_lstclear(&g_allocs, free_list);
	return (len);
}
