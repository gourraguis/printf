/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 13:16:06 by agourrag          #+#    #+#             */
/*   Updated: 2020/02/05 19:45:40 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_string(char *str, t_var *var)
{
	int len;

	if (var) {}

	len = ft_strlen(str);
	// handle width
	// handle precision
	ft_putstr(str);
	return (len);
}
