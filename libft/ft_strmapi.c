/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 17:43:17 by agourrag          #+#    #+#             */
/*   Updated: 2019/11/27 13:43:59 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;

	if (!s || !f)
		return (NULL);
	if ((res = malloc((ft_strlen(s) + 1) * sizeof(char))) == NULL)
		return (NULL);
	i = -1;
	while (s[++i] != '\0')
		res[i] = f(i, s[i]);
	res[i] = '\0';
	return (res);
}
