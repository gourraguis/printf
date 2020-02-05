/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 00:08:39 by agourrag          #+#    #+#             */
/*   Updated: 2020/02/05 13:15:03 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

#define TYPES "cspdiuxX%" // use these with strchr to avoid making is_type, is_flag functions
#define FLAGS "0-"

typedef	struct	s_var
{
	int		width;
	int		precision;
	char	flag;
	char	type;
}			t_var;

int ft_printf(const char *str, ...);

int	extract_var(const char *str, char **var);
t_var	*format_var(char *str, va_list args);
int	print_var(t_var *var, va_list args);

int	print_char(char c, t_var *var);
int	print_decimal(int n, t_var *var);
int	print_unsigned(unsigned int n, t_var *var);
int	print_hexadecimal(long n, t_var *var);

#endif
