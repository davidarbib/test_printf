/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darbib <darbib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 13:45:46 by darbib            #+#    #+#             */
/*   Updated: 2020/01/13 17:47:58 by darbib           ###   ########.fr       */
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
	(void)ac;
	(void)av;
	(void)ret;
/*
	if (av[3] && strchr(av[3], 'n'))
	{
		ret = printf(av[1], atoi(av[2]));
		printf("\n");
		printf("ret = %d\n", ret);
		return (0);
	}
	ret = printf(av[1], av[2]);
	printf("\n");
	printf("ret = %d\n", ret);
*/
/*
	char *str = "%-1\n";
	printf("ret : %d\n", printf(str));
*/
/*
	void *mem = malloc(10);
	ret = printf("%030p\n", mem);
	printf("ret = %d\n", ret);
*/
/*
	printf("%ll10c\n", 'a');
*/
/*
	printf("true : --%-3p--\n", "ok");
	ft_printf("mine : --%-3p--\n", "ok");
	printf("true : --%-3p--\n", NULL);
	ft_printf("mine : --%-3p--\n", NULL);
	printf("-%s-\n", ft_ptoa((long)"test"));
	printf("-%s-\n", ft_ptoa((long)NULL));
*/
//	printf("       ok%-9695c  %c       ", (char)0x0d, 'y');
//	ft_printf("       ok%-9695c  %c       ", (char)0x0d, 'y');
	printf("true : %06d\n", -42);
	ft_printf("mine : %06d\n", -42);
	printf("true : %06.d\n", 0);
	ft_printf("mine : %06.d\n", 0);
	printf("true : %d	%5d\n", 4, -56);
	ft_printf("mine : %d	%5d\n", 4, -56);
}
