/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandatory_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darbib <darbib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 15:22:04 by darbib            #+#    #+#             */
/*   Updated: 2020/01/13 17:47:55 by darbib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_sprintf.h"
#include "tests.h"

void	mandatory_d(char *true_buf, char *my_buf, int true_ret, int my_ret)
{
//				------------simple--------------
	true_ret = sprintf(true_buf, "%d", -42);
	my_ret = ft_sprintf(my_buf, "%d", -42);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%d", 42);
	my_ret = ft_sprintf(my_buf, "%d", 42);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%d", 0);
	my_ret = ft_sprintf(my_buf, "%d", 0);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
//				------------lmc--------------
	true_ret = sprintf(true_buf, "%1d", -42);
	my_ret = ft_sprintf(my_buf, "%1d", -42);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%1d", 42);
	my_ret = ft_sprintf(my_buf, "%1d", 42);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%1d", 0);
	my_ret = ft_sprintf(my_buf, "%1d", 0);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%5d", -42);
	my_ret = ft_sprintf(my_buf, "%5d", -42);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%5d", 42);
	my_ret = ft_sprintf(my_buf, "%5d", 42);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%5d", 0);
	my_ret = ft_sprintf(my_buf, "%5d", 0);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
//				------------option----------- 
	true_ret = sprintf(true_buf, "%-d", -42);
	my_ret = ft_sprintf(my_buf, "%-d", -42);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%-d", 42);
	my_ret = ft_sprintf(my_buf, "%-d", 42);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%-d", 0);
	my_ret = ft_sprintf(my_buf, "%-d", 0);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%06d", -42);
	my_ret = ft_sprintf(my_buf, "%06d", -42);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%06d", 42);
	my_ret = ft_sprintf(my_buf, "%06d", 42);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%06d", 0);
	my_ret = ft_sprintf(my_buf, "%06d", 0);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%06.d", -42);
	my_ret = ft_sprintf(my_buf, "%06.d", -42);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%06.d", 42);
	my_ret = ft_sprintf(my_buf, "%06.d", 42);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%06.d", 0);
	my_ret = ft_sprintf(my_buf, "%06.d", 0);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%-7d", -42);
	my_ret = ft_sprintf(my_buf, "%-7d", -42);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%-7d", 42);
	my_ret = ft_sprintf(my_buf, "%-7d", 42);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%-7d", 0);
	my_ret = ft_sprintf(my_buf, "%-7d", 0);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
//				-----------mix---------
	true_ret = sprintf(true_buf, "%d jambons svp", 3);
	my_ret = ft_sprintf(my_buf, "%d jambons svp", 3);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);	
	true_ret = sprintf(true_buf, "%d %5d", 4, -56);
	my_ret = ft_sprintf(my_buf, "%d	%5d", 4, -56);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);	
	true_ret = sprintf(true_buf, "hey %d baguettes et %5d pains ronds", 45, 60);
	my_ret = ft_sprintf(my_buf, "hey %d baguettes et %5d pains ronds", 45, 60);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);	
	true_ret = sprintf(true_buf, "%d is big?", (int)2147483648);
	my_ret = ft_sprintf(my_buf, "%d is big?", (int)2147483648);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);		
	true_ret = sprintf(true_buf, "%d is big", (int)2147483647);
	my_ret = ft_sprintf(my_buf, "%d is big", (int)2147483647);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);		
}
