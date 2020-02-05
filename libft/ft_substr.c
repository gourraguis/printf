/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:06:40 by agourrag          #+#    #+#             */
/*   Updated: 2019/11/27 13:42:45 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*res;
	size_t		i;

	if (!s)
		return (NULL);
	if ((res = malloc((len + 1) * sizeof(char))) == NULL)
		return (NULL);
	i = start;
	while (i--)
		if (*(s + i) == '\0')
		{
			res[0] = '\0';
			return (res);
		}
	i = 0;
	while (*(s + start + i) != '\0' && i < len)
	{
		*(res + i) = *(s + start + i);
		i++;
	}
	res[i] = '\0';
	return (res);
}
