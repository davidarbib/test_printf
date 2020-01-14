/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandatory_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darbib <darbib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 23:10:55 by darbib            #+#    #+#             */
/*   Updated: 2020/01/13 14:22:03 by darbib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_sprintf.h"
#include "tests.h"

void mandatory_p(char *true_buf, char *my_buf, int true_ret, int my_ret)
{
//				--------simple-------
	true_ret = sprintf(true_buf, "%p", "");
	my_ret = ft_sprintf(my_buf, "%p", "");
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%p", "ceci est un test");
	my_ret = ft_sprintf(my_buf, "%p", "ceci est un test");
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%p", NULL);
	my_ret = ft_sprintf(my_buf, "%p", NULL);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
//				----------lmc----------
	true_ret = sprintf(true_buf, "%3p", "");
	my_ret = ft_sprintf(my_buf, "%3p", "");
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%3p", "ceci est un test");
	my_ret = ft_sprintf(my_buf, "%3p", "ceci est un test");
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%3p", NULL);
	my_ret = ft_sprintf(my_buf, "%3p", NULL);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%50p", "");
	my_ret = ft_sprintf(my_buf, "%50p", "");
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%50p", "ceci est un test");
	my_ret = ft_sprintf(my_buf, "%50p", "ceci est un test");
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%50p", NULL);
	my_ret = ft_sprintf(my_buf, "%50p", NULL);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
/*
	true_ret = sprintf(true_buf, "%2147483647p", "");
	my_ret = ft_sprintf(my_buf, "%2147483647p", "");
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%2147483647p", "ceci est un test");
	my_ret = ft_sprintf(my_buf, "%2147483647p", "ceci est un test");
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%2147483647p", NULL);
	my_ret = ft_sprintf(my_buf, "%2147483647p", NULL);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
*/
//				----------option---------
	true_ret = sprintf(true_buf, "%-p", "");
	my_ret = ft_sprintf(my_buf, "%-p", "");
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%-p", "ceci est un test");
	my_ret = ft_sprintf(my_buf, "%-p", "ceci est un test");
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%-p", NULL);
	my_ret = ft_sprintf(my_buf, "%-p", NULL);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%-10p", "");
	my_ret = ft_sprintf(my_buf, "%-10p", "");
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%-10p", "ceci est un test");
	my_ret = ft_sprintf(my_buf, "%-10p", "ceci est un test");
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%-10p", NULL);
	my_ret = ft_sprintf(my_buf, "%-10p", NULL);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
//				-----------mix---------
	true_ret = sprintf(true_buf, "		jeldkjfl   skjl%p	%p", "ok", "");
	my_ret = ft_sprintf(my_buf, "		jeldkjfl   skjl%p	%p", "ok", "");
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%p%p      %p", "", NULL, NULL);
	my_ret = ft_sprintf(my_buf, "%p%p      %p", "", NULL, NULL);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "    %10p %-36p", "jfdflfk", "ok");
	my_ret = ft_sprintf(my_buf, "    %10p %-36p", "jfdflfk", "ok");
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
/*
	true_ret = sprintf(true_buf, "a%2147483646p %-36p", NULL, "ok");
	my_ret = ft_sprintf(my_buf, "a%2147483646p %-36p", NULL, "ok");
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
*/
}
