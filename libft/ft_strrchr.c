/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 10:19:57 by agourrag          #+#    #+#             */
/*   Updated: 2019/12/12 15:34:11 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*end;
	char		tmp;

	tmp = c;
	end = s + ft_strlen(s);
	while (end >= s)
	{
		if (*end == c)
			return ((char *)end);
		end--;
	}
	return (0);
}
