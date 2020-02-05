/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract_var.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 07:55:05 by agourrag          #+#    #+#             */
/*   Updated: 2020/02/05 10:07:05 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	extract_var(const char *str, char **var)
{
	int	i;

	str++;
	i = 0;
	while (ft_strchr(TYPES, str[i]) == 0)
		i++;
	i++;
	*var = ft_substr(str, 0, i);
	return (i);
}
