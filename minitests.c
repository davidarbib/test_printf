/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darbib <darbib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 13:45:46 by darbib            #+#    #+#             */
/*   Updated: 2019/12/11 23:56:14 by darbib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int ac, char **av)
{
	int ret;
	(void)ac;
	(void)av;

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
	char *str = "a%21ki%214748k\n";
	printf("ret : %d\n", printf(str, 'a', 'b'));
*/
	ret = printf("%045s\n", "test");
	printf("ret = %d\n", ret);
	/*
	(void)av;
	printf("");
*/
}
