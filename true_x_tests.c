/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   true_x_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darbib <darbib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 10:22:30 by darbib            #+#    #+#             */
/*   Updated: 2019/04/15 10:26:53 by darbib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testft_printf.h"


void true_x_tests()
{
	printf("-------- conversion x ----------\n");
	printf("-------- simple ----------\n");
	printf("%d\n",printf("%x\n", 42));
	printf("%d\n",printf("%x\n", 0));
	printf("%d\n",printf("%x\n", -42));
	printf("%d\n",printf("%0x\n", 42));
	printf("%d\n",printf("%0x\n", 0));
	printf("%d\n",printf("%0x\n", -42));
	printf("%d\n",printf("%#x\n", 42));
	printf("%d\n",printf("%#x\n", 0));
	printf("%d\n",printf("%#x\n", -42));
	printf("%d\n",printf("%-x\n", 42));
	printf("%d\n",printf("%-x\n", 0));
	printf("%d\n",printf("%-x\n", -42));

// -------- repetitive options ---------- 

	printf("------- n_options --------\n");
	printf("%d\n",printf("%---------------x\n", 42));
	printf("%d\n",printf("%---------------x\n", 0));
	printf("%d\n",printf("%---------------x\n", -42));
	printf("%d\n",printf("%###############x\n", 42));
	printf("%d\n",printf("%###############x\n", 0));
	printf("%d\n",printf("%###############x\n", -42));
	printf("%d\n",printf("%00000000000000000000x\n", 42));
	printf("%d\n",printf("%00000000000000000000x\n", 0));
	printf("%d\n",printf("%00000000000000000000x\n", -42));

// ---------- mixed options -----------------

	printf("------- mixed --------\n");
	printf("%d\n",printf("%########--------x\n", 42));
	printf("%d\n",printf("%########--------x\n", 0));
	printf("%d\n",printf("%########--------x\n", -42));
	printf("%d\n",printf("%--------########x\n", 42));
	printf("%d\n",printf("%--------########x\n", 0));
	printf("%d\n",printf("%--------########x\n", -42));
	printf("%d\n",printf("%########00000000x\n", 42));
	printf("%d\n",printf("%########00000000x\n", 0));
	printf("%d\n",printf("%########00000000x\n", -42));
	printf("%d\n",printf("%00000000########x\n", 42));
	printf("%d\n",printf("%00000000########x\n", 0));
	printf("%d\n",printf("%00000000########x\n", -42));

// ---------- LMC & precision ---------

	printf("------- MFW --------\n");
	printf("%d\n",printf("%3x", 42));
	printf("%d\n",printf("%3x", 0));
	printf("%d\n",printf("%3x", -42));
	printf("%d\n",printf("%.7x", 42));
	printf("%d\n",printf("%.7x", 0));
	printf("%d\n",printf("%.7x", -42));
	printf("%d\n",printf("%3.7x", 42));
	printf("%d\n",printf("%3.7x", 0));
	printf("%d\n",printf("%3.7x", -42));

// --------- sizes ----------

	printf("------- sizes --------\n");
	printf("%d\n",printf("%hx\n", (short)42));
	printf("%d\n",printf("%hx\n", (short)0));
	printf("%d\n",printf("%hx\n", (short)-42));
	printf("%d\n",printf("%hhx\n", (char)42));
	printf("%d\n",printf("%hhx\n", (char)0));
	printf("%d\n",printf("%hhx\n", (char)-42));
	printf("%d\n",printf("%lx\n", (long)42));
	printf("%d\n",printf("%lx\n", (long)0));
	printf("%d\n",printf("%lx\n", (long)-42));
	printf("%d\n",printf("%llx\n", (long long)42));
	printf("%d\n",printf("%llx\n", (long long)0));
	printf("%d\n",printf("%llx\n", (long long)-42));

// ---------- repetitive conversions --------

	printf("------- n_conversions --------\n");
	printf("%d\n",printf("%x%x%x\n", 42, 0, -42));
	printf("%d\n",printf("%x    %x           %x\n", 42, 0, -42));
	printf("%d\n",printf("%#x%-10x%0x\n", 42, 0, -42));
	printf("%d\n", printf("%lx%hx%x\n", (long)42, (short)0, -42));

// ------------- together ---------------

	printf("------- together --------\n");
	printf("%d\n", printf("%-10.3llx\n people waiting", (long long)100));
	printf("%d\n", printf("time before world end : %2147483647.15hx days\n", (short)0));
	printf("%d\n", printf("%.2x\n", 42));
	printf("%d\n", printf("%010.3llx\n", (long long)42));
	printf("%d\n", printf("0%0.2x0\n", 42));
	printf("%d\n", printf("%-5.6llx%03.7hx%x%%x%7x%xx\n", (long long)1, (short)2, -3, -4, 5));
	printf("%d\n", printf("%05.9lx%-6.10x%x%%x%7x%xx\n", (long)1, 2, -3, -4, 5));
	printf("%d\n", printf("%%x%xx%xx%%x\n", 1, 2));
	printf("%d\n", printf("%%x%%x%%x%%x\n"));
	printf("%d\n", printf("this is red : %x%%x%%x%%x%%x\n", 255));
}
