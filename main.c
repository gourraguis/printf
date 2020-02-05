/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agourrag <agourrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 00:07:04 by agourrag          #+#    #+#             */
/*   Updated: 2020/02/05 19:46:04 by agourrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

#define test_case "%-30s","abcde"
// #define test_case "%030x",222
// #define test_case "%-30u",-3
// #define test_case "%03d",3
// #define test_case "%5.*sZZZ", 3, "abcdef"
// #define test_case "ZZ%cYY%3cTT%7%NN", 'c', 'w'

int main() {
	int tmp;

	printf("|");
	tmp = printf(test_case);
	printf("|\toriginal had %d chars\n", tmp);
	ft_putchar('|');
	tmp = ft_printf(test_case);
	printf("|\tduplicat had %d chars", tmp);
}
