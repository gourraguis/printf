/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 12:30:06 by agourrag          #+#    #+#             */
/*   Updated: 2020/02/05 12:53:36 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int nn;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nn = n * -1;
	}
	else
		nn = n;
	if (nn > 9)
		ft_putnbr_fd(nn / 10, fd);
	ft_putchar_fd(nn % 10 + '0', fd);
}
