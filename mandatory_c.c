/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandatory_c_tests.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darbib <darbib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 14:00:38 by darbib            #+#    #+#             */
/*   Updated: 2019/12/11 16:19:24 by darbib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftft_printf.h"
#include "testft_printf.h"
#include "tests.h"
#include <stdio.h>

void mandatory_c(char *true_buf, char *my_buf, int true_ret, int my_ret)
{	
//				------------simple--------------
	true_ret = sprintf(true_buf, "%c", '\0');
	my_ret = ft_sprintf(my_buf, "%c", '\0');
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%c", (char)0x1b);
	my_ret = ft_sprintf(my_buf, "%c", (char)0x1b);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%c", 'a');
	my_ret = ft_sprintf(my_buf, "%c", 'a');
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
//				------------lmc--------------
	true_ret = sprintf(true_buf, "%1c", '\0');
	my_ret = ft_sprintf(my_buf, "%1c", '\0');
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%1c", (char)0x1b);
	my_ret = ft_sprintf(my_buf, "%1c", (char)0x1b);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%1c", 'a');
	my_ret = ft_sprintf(my_buf, "%1c", 'a');
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%3c", '\0');
	my_ret = ft_sprintf(my_buf, "%3c", '\0');
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%3c", (char)0x1b);
	my_ret = ft_sprintf(my_buf, "%3c", (char)0x1b);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%3c", 'a');
	my_ret = ft_sprintf(my_buf, "%3c", 'a');
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%2147483647c", '\0');
	my_ret = ft_sprintf(my_buf, "%2147483647c", '\0');
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%2147483647c", (char)0x1b);
	my_ret = ft_sprintf(my_buf, "%2147483647c", (char)0x1b);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%2147483647c", 'a');
	my_ret = ft_sprintf(my_buf, "%2147483647c", 'a');
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%2147483648c", '\0');
	my_ret = ft_sprintf(my_buf, "%2147483648c", '\0');
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%2147483648c", (char)0x1b);
	my_ret = ft_sprintf(my_buf, "%2147483648c", (char)0x1b);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%2147483648c", 'a');
	my_ret = ft_sprintf(my_buf, "%2147483648c", 'a');
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
//				------------option----------- 
	true_ret = sprintf(true_buf, "%-c", '\0');
	my_ret = ft_sprintf(my_buf, "%-c", '\0');
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%-c", (char)0x1b);
	my_ret = ft_sprintf(my_buf, "%-c", (char)0x1b);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%-c", 'a');
	my_ret = ft_sprintf(my_buf, "%-c", 'a');
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%-10c", '\0');
	my_ret = ft_sprintf(my_buf, "%-10c", '\0');
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%-10c", (char)0x1b);
	my_ret = ft_sprintf(my_buf, "%-10c", (char)0x1b);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
//				-----------mix---------
	true_ret = sprintf(true_buf, "ok%c%c", 'a', 'y');
	my_ret = ft_sprintf(my_buf, "ok%c%c", 'a', 'y');
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
}
