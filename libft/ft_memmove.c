/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 11:37:51 by agourrag          #+#    #+#             */
/*   Updated: 2019/12/12 15:27:51 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p1;
	unsigned char	*p2;

	if (!src && !dst)
		return (0);
	if (src < dst)
	{
		p1 = (unsigned char *)dst + len - 1;
		p2 = (unsigned char *)src + len - 1;
		while (len--)
			*p1-- = *p2--;
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
