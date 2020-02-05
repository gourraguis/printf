/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 11:32:58 by agourrag          #+#    #+#             */
/*   Updated: 2019/12/12 15:26:57 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const unsigned char	*p1;
	unsigned char		*p2;

	p1 = src;
	p2 = dst;
	while (n--)
	{
		*p2++ = *p1;
		if (*p1 == (unsigned char)c)
			return (p2);
		p1++;
	}
	return (0);
}
