/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darbib <darbib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 13:45:46 by darbib            #+#    #+#             */
/*   Updated: 2019/12/13 16:32:22 by darbib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_printf.h"

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
	ft_printf(
}
