/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 11:26:31 by agourrag          #+#    #+#             */
/*   Updated: 2020/02/05 12:39:27 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_nbrlen(unsigned int num, int base, int is_negative)
{
	int res;

	res = 0;
	if (num == 0)
		return (1);
	if (is_negative && base == 10)
		res++;
	while (num)
	{
		num /= base;
		res++;
	}
	return (res);
}

static	void	ft_nbr_to_str(unsigned int num, int base, char *res)
{
	int i;
	int tmp;

	i = 0;
	if (num == 0)
	{
		res[0] = '0';
		return ;
	}
	while (num)
	{
		tmp = num % base;
		if (tmp > 9)
			res[i++] = (tmp - 10) + 'a';
		else
			res[i++] = tmp + '0';
		num /= base;
	}
}

char			*ft_itoa_base(long n, int base)
{
	int				i;
	int				is_negative;
	char			*res;
	unsigned int	num;

	if (base < 2 || base > 16)
		return (NULL);
	is_negative = 0;
	if (n < 0 && base == 10)
	{
		is_negative = 1;
		num = n * -1;
	}
	else
		num = n;
	if (!(res = malloc(sizeof(char) * (ft_nbrlen(num, base, is_negative) + 1))))
		return (NULL);
	ft_nbr_to_str(num, base, res);
	i = ft_nbrlen(num, base, is_negative);
	if (is_negative)
		res[i - 1] = '-';
	res[i] = '\0';
	ft_strreverse(res);
	return (res);
}
