/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_var.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 08:41:01 by agourrag          #+#    #+#             */
/*   Updated: 2020/02/05 09:53:48 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

// void	init_var(t_var *var)
// {
// 	var->width = 0;
// 	var->precision = -1;
// 	var->flag = ' ';
// }

int get_digits_len(char *str)
{
	int i;

	i = 0;
	while (ft_isdigit(str[i]))
		i++;
	return (i);
}

int	set_flag(t_var *var, char *str)
{
	if (var->flag != '-')
		var->flag = *str;
	return (1);
}

int set_precision(t_var *var, char *str, va_list args)
{
	str++;
	if (*str == '*')
	{
		var->precision = va_arg(args, int);
		return (2);
	}
	else
	{
		var->precision = ft_atoi(str);
		return (get_digits_len(str) + 1);
	}
}

int		set_width(t_var *var, char *str, va_list args)
{
	if (*str == '*')
	{
		var->width = va_arg(args, int);
		return (1);
	}
	else
	{
		var->width = ft_atoi(str);
		return (get_digits_len(str));
	}

}

t_var	*format_var(char *str, va_list args)
{
	t_var *res;

	res = malloc(sizeof(t_var));
	res->width = 0;
	while (*str)
	{
		// printf("%s\n", str);
		if (ft_strchr(FLAGS, *str))
		{
			str += set_flag(res, str);
		}
		else if (*str == '.')
		{
			str += set_precision(res, str, args);
		}
		else if (*str == '*' || ft_isdigit(*str))
		{
			str += set_width(res, str, args);
		}
		else
		{
			str++;
		}
	}
	res->type = *(str - 1);
	return (res);
}
