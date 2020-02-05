/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 08:40:02 by agourrag          #+#    #+#             */
/*   Updated: 2019/12/12 15:31:56 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = 0;
	while (dst[len] && len < size)
		len++;
	if (len < size)
	{
		i = 0;
		while (src[i] && len + i + 1 < size)
		{
			dst[len + i] = src[i];
			i++;
		}
		dst[len + i] = 0;
	}
	return (len + ft_strlen(src));
}
