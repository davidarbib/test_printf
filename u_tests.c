/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_tests.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darbib <darbib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 21:55:49 by darbib            #+#    #+#             */
/*   Updated: 2019/04/15 10:27:50 by darbib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testft_printf.h"

void u_tests()
{
	printf("-------- conversion u ----------\n");
	printf("-------- simple ----------\n");
	printf("%d\n",ft_printf("%u\n", 42));
	printf("%d\n",ft_printf("%u\n", 0));
	printf("%d\n",ft_printf("%u\n", -42));
	printf("%d\n",ft_printf("%0u\n", 42));
	printf("%d\n",ft_printf("%0u\n", 0));
	printf("%d\n",ft_printf("%0u\n", -42));
	printf("%d\n",ft_printf("%-u\n", 42));
	printf("%d\n",ft_printf("%-u\n", 0));
	printf("%d\n",ft_printf("%-u\n", -42));
	printf("%d\n",ft_printf("%u\n", 42));
	printf("%d\n",ft_printf("%u\n", 0));
	printf("%d\n",ft_printf("%u\n", -42));

// -------- repetitive options ---------- 

	printf("------- n_options --------\n");
	printf("%d\n",ft_printf("%---------------u\n", 42));
	printf("%d\n",ft_printf("%---------------u\n", 0));
	printf("%d\n",ft_printf("%---------------u\n", -42));
	printf("%d\n",ft_printf("%00000000000000000000u\n", 42));
	printf("%d\n",ft_printf("%00000000000000000000u\n", 0));
	printf("%d\n",ft_printf("%00000000000000000000u\n", -42));

// ---------- mixed options -----------------

	printf("------- mixed --------\n");

// ---------- LMC & precision ---------

	printf("------- MFW --------\n");
	printf("%d\n",ft_printf("%3u", 42));
	printf("%d\n",ft_printf("%3u", 0));
	printf("%d\n",ft_printf("%3u", -42));
	printf("%d\n",ft_printf("%.7u", 42));
	printf("%d\n",ft_printf("%.7u", 0));
	printf("%d\n",ft_printf("%.7u", -42));
	printf("%d\n",ft_printf("%3.7u", 42));
	printf("%d\n",ft_printf("%3.7u", 0));
	printf("%d\n",ft_printf("%3.7u", -42));

// --------- sizes ----------

	printf("------- sizes --------\n");
	printf("%d\n",ft_printf("%hu\n", (short)42));
	printf("%d\n",ft_printf("%hu\n", (short)0));
	printf("%d\n",ft_printf("%hu\n", (short)-42));
	printf("%d\n",ft_printf("%hhu\n", (char)42));
	printf("%d\n",ft_printf("%hhu\n", (char)0));
	printf("%d\n",ft_printf("%hhu\n", (char)-42));
	printf("%d\n",ft_printf("%lu\n", (long)42));
	printf("%d\n",ft_printf("%lu\n", (long)0));
	printf("%d\n",ft_printf("%lu\n", (long)-42));
	printf("%d\n",ft_printf("%llu\n", (long long)42));
	printf("%d\n",ft_printf("%llu\n", (long long)0));
	printf("%d\n",ft_printf("%llu\n", (long long)-42));

// ---------- repetitive conversions --------

	printf("------- n_conversions --------\n");
	printf("%d\n",ft_printf("%u%u%u\n", 42, 0, -42));
	printf("%d\n",ft_printf("%u    %u           %u\n", 42, 0, -42));
	printf("%d\n",ft_printf("%-u%-u%0u\n", 42, 0, -42));
	printf("%d\n",ft_printf("%lu%hu%u\n", (long)42, (short)0, -42));

// ------------- together ---------------

	printf("------- together --------\n");
	printf("%d\n", ft_printf("%-10.3llu\n people waiting", (long long)100));
	printf("%d\n", ft_printf("time before world end : %2147483647.15hu days\n", (short)0));
	printf("%d\n", ft_printf("%.2u\n", 42));
	printf("%d\n", ft_printf("%-10.3llu\n", (long long)42));
	printf("%d\n", ft_printf("0%0.2u0\n", 42));
	printf("%d\n", ft_printf("%-5.6llu%03.7hu%u%%u%7u%uu\n", (long long)1, (short)2, -3, -4, 5));
	printf("%d\n", ft_printf("%05.9lu%-6.10u%u%%u%7u%uu\n", (long)1, 2, -3, -4, 5));
	printf("%d\n", ft_printf("%%u%uu%uu%%u\n", 1, 2));
	printf("%d\n", ft_printf("%%u%%u%%u%%u\n"));
	printf("%d\n", printf("%u\n",(unsigned int)4294967295));
}
