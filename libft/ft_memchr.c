/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 11:56:31 by agourrag          #+#    #+#             */
/*   Updated: 2019/12/12 15:43:16 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p1;
	unsigned char		elem;

	p1 = s;
	elem = c;
	while (n--)
	{
		if (*p1 == elem)
			return ((void *)p1);
		p1++;
	}
	return (0);
}
