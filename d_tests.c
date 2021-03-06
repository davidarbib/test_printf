/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   true_d_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darbib <darbib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 10:52:19 by darbib            #+#    #+#             */
/*   Updated: 2019/04/13 13:06:12 by darbib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testft_printf.h"

void d_tests()
{
	printf("-------- conversion d ----------\n");
	printf("-------- simple ----------\n");
	printf("%d\n",ft_printf("%d\n", 42));
	printf("%d\n",ft_printf("%d\n", 0));
	printf("%d\n",ft_printf("%d\n", -42));
	printf("%d\n",ft_printf("%0d\n", 42));
	printf("%d\n",ft_printf("%0d\n", 0));
	printf("%d\n",ft_printf("%0d\n", -42));
	printf("%d\n",ft_printf("%-d\n", 42));
	printf("%d\n",ft_printf("%-d\n", 0));
	printf("%d\n",ft_printf("%-d\n", -42));
	printf("%d\n",ft_printf("% d\n", 42));
	printf("%d\n",ft_printf("% d\n", 0));
	printf("%d\n",ft_printf("% d\n", -42));
	printf("%d\n",ft_printf("%+d\n", 42));
	printf("%d\n",ft_printf("%+d\n", 0));
	printf("%d\n",ft_printf("%+d\n", -42));
	printf("%d\n",ft_printf("% d\n", 42));
	printf("%d\n",ft_printf("% d\n", 0));
	printf("%d\n",ft_printf("% d\n", -42));
	printf("%d\n",ft_printf("%d\n", 42));
	printf("%d\n",ft_printf("%d\n", 0));
	printf("%d\n",ft_printf("%d\n", -42));
	printf("%d\n",ft_printf("%0d\n", 42));
	printf("%d\n",ft_printf("%0d\n", 0));
	printf("%d\n",ft_printf("%0d\n", -42));
	printf("%d\n",ft_printf("%-d\n", 42));
	printf("%d\n",ft_printf("%-d\n", 0));
	printf("%d\n",ft_printf("%-d\n", -42));
	printf("%d\n",ft_printf("% d\n", 42));
	printf("%d\n",ft_printf("% d\n", 0));
	printf("%d\n",ft_printf("% d\n", -42));
	printf("%d\n",ft_printf("%+d\n", 42));
	printf("%d\n",ft_printf("%+d\n", 0));
	printf("%d\n",ft_printf("%+d\n", -42));
	printf("%d\n",ft_printf("% d\n", 42));
	printf("%d\n",ft_printf("% d\n", 0));
	printf("%d\n",ft_printf("% d\n", -42));

// -------- repetitive options ---------- 
	printf("------- n_options --------\n");
	printf("%d\n",ft_printf("%++++++++++++++d\n", 42));
	printf("%d\n",ft_printf("%++++++++++++++d\n", 0));
	printf("%d\n",ft_printf("%++++++++++++++d\n", -42));
	printf("%d\n",ft_printf("%---------------d\n", 42));
	printf("%d\n",ft_printf("%---------------d\n", 0));
	printf("%d\n",ft_printf("%---------------d\n", -42));
	printf("%d\n",ft_printf("%00000000000000000000d\n", 42));
	printf("%d\n",ft_printf("%00000000000000000000d\n", 0));
	printf("%d\n",ft_printf("%00000000000000000000d\n", -42));
	printf("%d\n",ft_printf("%                    d\n", 42));
	printf("%d\n",ft_printf("%                     d\n", 0));
	printf("%d\n",ft_printf("%                     d\n", -42));

// ---------- mixed options -----------------
	printf("------- mixed --------\n");
	printf("%d\n",ft_printf("%++++++++--------d\n", 42));
	printf("%d\n",ft_printf("%++++++++--------d\n", 0));
	printf("%d\n",ft_printf("%++++++++--------d\n", -42));
	printf("%d\n",ft_printf("%--------++++++++d\n", 42));
	printf("%d\n",ft_printf("%--------++++++++d\n", 0));
	printf("%d\n",ft_printf("%--------++++++++d\n", -42));
	printf("%d\n",ft_printf("%00000000++++++++d\n", 42));
	printf("%d\n",ft_printf("%00000000++++++++d\n", 0));
	printf("%d\n",ft_printf("%00000000++++++++d\n", -42));
	printf("%d\n",ft_printf("%--------        d\n", 42));
	printf("%d\n",ft_printf("%--------        d\n", 0));
	printf("%d\n",ft_printf("%--------        d\n", -42));
	printf("%d\n",ft_printf("%        --------d\n", 42));
	printf("%d\n",ft_printf("%        --------d\n", 0));
	printf("%d\n",ft_printf("%        --------d\n", -42));
	printf("%d\n",ft_printf("%        00000000d\n", 42));
	printf("%d\n",ft_printf("%        00000000d\n", 0));
	printf("%d\n",ft_printf("%        00000000d\n", -42));
	printf("%d\n",ft_printf("%00000000        d\n", 42));
	printf("%d\n",ft_printf("%00000000        d\n", 0));
	printf("%d\n",ft_printf("%00000000        d\n", -42));

// ---------- MFW & precision ---------

	printf("------- MFW --------\n");
	printf("%d\n",ft_printf("%3d", 42));
	printf("%d\n",ft_printf("%3d", 0));
	printf("%d\n",ft_printf("%3d", -42));
	printf("%d\n",ft_printf("%.7d", 42));
	printf("%d\n",ft_printf("%.7d", 0));
	printf("%d\n",ft_printf("%.7d", -42));
	printf("%d\n",ft_printf("%3.7d", 42));
	printf("%d\n",ft_printf("%3.7d", 0));
	printf("%d\n",ft_printf("%3.7d", -42));

// --------- sizes ----------

	printf("------- sizes --------\n");
	printf("%d\n",ft_printf("%hd\n", (short)42));
	printf("%d\n",ft_printf("%hd\n", (short)0));
	printf("%d\n",ft_printf("%hd\n", (short)-42));
	printf("%d\n",ft_printf("%hhd\n", (char)42));
	printf("%d\n",ft_printf("%hhd\n", (char)0));
	printf("%d\n",ft_printf("%hhd\n", (char)-42));
	printf("%d\n",ft_printf("%ld\n", (long)42));
	printf("%d\n",ft_printf("%ld\n", (long)0));
	printf("%d\n",ft_printf("%ld\n", (long)-42));
	printf("%d\n",ft_printf("%lld\n", (long long)42));
	printf("%d\n",ft_printf("%lld\n", (long long)0));
	printf("%d\n",ft_printf("%lld\n", (long long)-42));

// ---------- repetitive conversions --------

	printf("------- n_conversions --------\n");
	printf("%d\n",ft_printf("%d%d%d\n", 42, 0, -42));
	printf("%d\n",ft_printf("%d    %d           %d\n", 42, 0, -42));
	printf("%d\n",ft_printf("%d% d%0d\n", 42, 0, -42));
	printf("%d\n",ft_printf("%ld%hd%d\n", (long)42, (short)0, -42));
                   
// ------------- together ---------------
                   
	printf("------ - together --------\n");
	printf("%d\n",ft_printf("%-10.3lld\n people waiting", (long long)100));
	printf("%d\n",ft_printf("time before world end : %2147483647.15hd days\n", (short)0));
	printf("%d\n",ft_printf("%.2d\n", 42));
	printf("%d\n",ft_printf("%+10.3lld\n", (long long)42));
	printf("%d\n",ft_printf("0%0.2d0\n", 42));
	printf("%d\n",ft_printf("%-5.6lld%+3.7hd%d%%d%7d%dd\n", (long long)1, (short)2, -3, -4, 5));
	printf("%d\n",ft_printf("%05.9ld%-6.10d%d%%d%7d%dd\n", (long)1, 2, -3, -4, 5));
	printf("%d\n",ft_printf("%%d%dd%dd%%d\n", 1, 2));
	printf("%d\n",ft_printf("%%d%%d%%d%%d\n"));
}
