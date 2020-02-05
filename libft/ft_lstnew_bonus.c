/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 17:53:12 by agourrag          #+#    #+#             */
/*   Updated: 2019/12/04 11:50:00 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *res;

	if ((res = malloc(sizeof(res))) == NULL)
		return (NULL);
	if (!content)
		res->content = NULL;
	else
		res->content = content;
	res->next = NULL;
	return (res);
}
