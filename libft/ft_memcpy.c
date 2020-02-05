/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 11:24:38 by agourrag          #+#    #+#             */
/*   Updated: 2019/12/12 15:26:33 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*p1;
	unsigned char		*p2;

	if (!src && !dst)
		return (0);
	p1 = src;
	p2 = dst;
	while (n--)
		*p2++ = *p1++;
	return (dst);
}
