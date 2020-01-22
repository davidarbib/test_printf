/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darbib <darbib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 13:45:46 by darbib            #+#    #+#             */
/*   Updated: 2020/01/21 01:01:08 by darbib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_printf.h"
#include "libft.h"

int	main(int ac, char **av)
{
	int ret;
//	(void)ac;
//	(void)av;
//	(void)ret;

/*
	printf("%p\n", "");
	ft_printf("%p\n", "");
	printf("%3p\n", NULL);
	ft_printf("%3p\n", NULL);
	printf("-%-10p-\n", "");
	ft_printf("-%-10p-\n", "");
	printf("-%d	%5d-\n", 4, -56);
	ft_printf("-%d	%5d-\n", 4, -56);
	printf("%d\n", printf("%.8589934595d\n", 32));
*/
/*
	printf("true : -%*c-\n", -3, 'a');
	ft_printf("mine : -%*c-\n", -3, 'a');
	printf("true : %*s\n", -1000, "");
	ft_printf("mine : %*s\n", -1000, "");
	printf("true : %.s\n", 42);
	ft_printf("mine : %.s\n", 42);
*/
/*
	printf("|%*d|\n", -3, 42);
	printf("|%*d|\n", 3, 42);
	printf("ret : %d\n", printf("|%*d|\n", -2147483648, 42));
	printf("ret : %d\n", printf("|%*d|\n", -2147483649, 42));
*/

/*
	printf("true : |ZPl%0*XRlrn%-.*dWw%.5d%-5.1s%X|\n", 5, -2147483647, -3, 0,
			2147483647, "bhJ8Shog4rZYkS GZ8uraWiuHUy94vdZv5y", -392341870);
	ft_printf("mine : |ZPl%0*XRlrn%-.*dWw%.5d%-5.1s%X|\n", 5, -2147483647, -3, 0,
			2147483647, "bhJ8Shog4rZYkS GZ8uraWiuHUy94vdZv5y", -392341870);
	printf("true : |%-.*dWw%.5d%-5.1s%X|\n", -3, 0,
			2147483647, "bhJ8Shog4rZYkS GZ8uraWiuHUy94vdZv5y", -392341870);
	ft_printf("mine : |%-.*dWw%.5d%-5.1s%X|\n", -3, 0,
			2147483647, "bhJ8Shog4rZYkS GZ8uraWiuHUy94vdZv5y", -392341870);
*/
	char *str = "--%016.*p--\n";
	printf(str, -10, "");
	ft_printf(str, -10, "");
/*
	printf("true : |test%---10.6x et %01X !!|\n", 0xaabb, 0);
	ft_printf("mine : |test%---10.6x et %01X !!|\n", 0xaabb, 0);
*/
	//printf("%d\n", ft_printf("%21.2147483648d\n", 32));
/*
	printf("%d\n", printf("true : %.5d\n", -15));
	printf("%d\n", ft_printf("mine : %.5d\n", -15));
	printf("%d\n", printf("true : %10.5d\n", -15));
	printf("%d\n", ft_printf("mine : %10.5d\n", -15));
	printf("%d\n", printf("true : %0.5d\n", -15));
	printf("%d\n", ft_printf("mine : %0.5d\n", -15));
	printf("%d\n", printf("true : %010.5d\n", -15));
	printf("%d\n", ft_printf("mine : %010.5d\n", -15));
	printf("%d\n", printf("true : %d\n", -15));
	printf("%d\n", ft_printf("mine : %d\n", -15));
	printf("%d\n", printf("true : %10.5d\n", -15));
	printf("%d\n", ft_printf("mine : %10.5d\n", -15));
	printf("%d\n", printf("true : %0.5d\n", -15));
	printf("%d\n", ft_printf("mine : %0.5d\n", -15));
	printf("%d\n", printf("true : %010.5d\n", -15));
	printf("%d\n", ft_printf("mine : %010.5d\n", -15));
	printf("%d\n", printf("true : %10d\n", -15));
	printf("%d\n", ft_printf("mine : %10d\n", -15));
	printf("%d\n", printf("true : %010d\n", -15));
	printf("%d\n", ft_printf("mine : %010d\n", -15));
*/
/*
	printf("%d\n", printf("true : %.5u\n", 15));
	printf("%d\n", ft_printf("mine : %.5u\n", 15));
	printf("%d\n", printf("true : %10.5u\n", 15));
	printf("%d\n", ft_printf("mine : %10.5u\n", 15));
	printf("%d\n", printf("true : %0.5u\n", 15));
	printf("%d\n", ft_printf("mine : %0.5u\n", 15));
	printf("%d\n", printf("true : %010.5u\n", 15));
	printf("%d\n", ft_printf("mine : %010.5u\n", 15));
	printf("%d\n", printf("true : %u\n", 15));
	printf("%d\n", ft_printf("mine : %u\n", 15));
	printf("%d\n", printf("true : %10.5u\n", 15));
	printf("%d\n", ft_printf("mine : %10.5u\n", 15));
	printf("%d\n", printf("true : %0.5u\n", 15));
	printf("%d\n", ft_printf("mine : %0.5u\n", 15));
	printf("%d\n", printf("true : %010.5u\n", 15));
	printf("%d\n", ft_printf("mine : %010.5u\n", 15));
	printf("%d\n", printf("true : %10u\n", 15));
	printf("%d\n", ft_printf("mine : %10u\n", 15));
	printf("%d\n", printf("true : %010u\n", 15));
	printf("%d\n", ft_printf("mine : %010u\n", 15));
*/
//
/*
	printf("%d\n", printf("true : %.5X\n", 15));
	printf("%d\n", ft_printf("mine : %.5X\n", 15));
	printf("%d\n", printf("true : %10.5X\n", 15));
	printf("%d\n", ft_printf("mine : %10.5X\n", 15));
	printf("%d\n", printf("true : %0.5X\n", 15));
	printf("%d\n", ft_printf("mine : %0.5X\n", 15));
	printf("%d\n", printf("true : %010.5X\n", 15));
	printf("%d\n", ft_printf("mine : %010.5X\n", 15));
	printf("%d\n", printf("true : %X\n", 15));
	printf("%d\n", ft_printf("mine : %X\n", 15));
	printf("%d\n", printf("true : %10.5X\n", 15));
	printf("%d\n", ft_printf("mine : %10.5X\n", 15));
	printf("%d\n", printf("true : %0.5X\n", 15));
	printf("%d\n", ft_printf("mine : %0.5X\n", 15));
	printf("%d\n", printf("true : %010.5X\n", 15));
	printf("%d\n", ft_printf("mine : %010.5X\n", 15));
	printf("%d\n", printf("true : %10X\n", 15));
	printf("%d\n", ft_printf("mine : %10X\n", 15));
	printf("%d\n", printf("true : %010X\n", 15));
	printf("%d\n", ft_printf("mine : %010X\n", 15));
*/
/*
	printf("%d\n", printf("true : %010s\n", "test"));
	printf("%d\n", printf("true : %010.2s\n", "test"));
	printf("%d\n", printf("true : %10s\n", "test"));
	printf("%d\n", printf("true : %10.2s\n", "test"));
	printf("%d\n", printf("true : %10.s\n", "test"));
	printf("%d\n", printf("true : %010.s\n", "test"));
	printf("%d\n", printf("true : %10.3d\n", 0));
*/

/*
	printf("%d\n", printf("true : %010.5p\n", ""));
	printf("%d\n", printf("true : %010.15p\n", ""));
	printf("%d\n", printf("true : %20.15p\n", ""));
	printf("%d\n", printf("true : %020.15p\n", ""));
	printf("%d\n", printf("true : %015p\n", ""));
	printf("%d\n", printf("true : %0.15p\n", ""));
	printf("%d\n", printf("true : %.3d\n", 42));
	printf("%d\n", printf("true : %4.3d\n", 42));
	printf("%d\n", printf("true : %04.3d\n", 42));
	printf("%d\n", printf("true : %04d\n", 42));
	printf("%d\n", printf("true : %04.d\n", 42));
*/
/*
*/
/*
	printf("trXe : |%06X|\n", -42);
	ft_printf("mine : |%06X|\n", -42);
	printf("trXe : |%06.X|\n", 0);
	ft_printf("mine : |%06.X|\n", 0);
	printf("trXe : |%06.0X|\n", 0);
	ft_printf("mine : |%06.0X|\n", 0);
	printf("trXe : |%06.1X|\n", 0);
	ft_printf("mine : |%06.1X|\n", 0);
	printf("trXe : |%06X|\n", 0);
	ft_printf("mine : |%06X|\n", 0);
	printf("trXe : |%6X|\n", 0);
	ft_printf("mine : |%6X|\n", 0);
	printf("trXe : |%X %5X|\n", 4, -56);
	ft_printf("mine : |%X %5X|\n", 4, -56);
	printf("trXe : |%X|\n", -2147483648);
	ft_printf("mine : |%X|\n", -2147483648);
	printf("trXe : |%5X|\n", -56);
	ft_printf("mine : |%5X|\n", -56);
	printf("trXe : |%-5X|\n", -56);
	ft_printf("mine : |%-5X|\n", -56);
	printf("trXe : |%05X|\n", -56);
	ft_printf("mine : |%05X|\n", -56);
	printf("trXe : |%05.X|\n", -56);
	printf("trXe : |%05.X|\n", -1);
	ft_printf("mine : |%05.X|\n", -1);
*/
//	printf("--%5.0-3I--\n");
//	ft_printf("--%5.0-3I--\n");
}
