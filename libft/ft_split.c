/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tom <tom@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 12:45:09 by agourrag          #+#    #+#             */
/*   Updated: 2019/12/11 13:10:01 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_count_strings(const char *s, char c)
{
	int res;
	int i;

	if (s[0] == '\0')
		return (0);
	res = 0;
	if (s[0] != c)
		res++;
	i = 0;
	while (s[++i] != '\0')
		if (s[i - 1] == c && s[i] != c)
			res++;
	return (res);
}

static	char	*ft_remove_char(char *s, char c)
{
	int i;

	i = -1;
	while (s[++i] != '\0')
		if (s[i] == c)
			s[i] = '\0';
	return (s);
}

static	int		allocate_helper(char const *s, char ***res, char **tmp, int c)
{
	if (!s)
		return (0);
	if (!(*res = malloc((ft_count_strings(s, c) + 1) * sizeof(char*))))
		return (0);
	if (!(*tmp = ft_remove_char(ft_strdup(s), c)))
		return (0);
	return (1);
}

char			**ft_split(char const *s, int c)
{
	char	**res;
	char	*tmp;
	int		pos;
	size_t	i;

	if (!allocate_helper(s, &res, &tmp, c))
		return (NULL);
	pos = -1;
	i = 0;
	while (i < ft_strlen(s))
	{
		while (tmp[i] == '\0' && i < ft_strlen(s))
			i++;
		if (i < ft_strlen(s))
		{
			if (!(res[++pos] = ft_strdup(tmp + i)))
				return (NULL);
			while (tmp[i] != '\0')
				i++;
		}
	}
	res[ft_count_strings(s, c)] = NULL;
	free(tmp);
	return (res);
}
