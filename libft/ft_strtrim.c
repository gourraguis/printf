/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:49:27 by agourrag          #+#    #+#             */
/*   Updated: 2019/11/29 23:42:45 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	check_char(char const c, char const *set)
{
	while (*set != '\0')
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		x;
	int		y;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	x = 0;
	while (check_char(s1[x], set))
		x++;
	y = len;
	while (check_char(s1[y - 1], set) && y > x)
		y--;
	return (ft_substr(s1, x, y - x));
}
