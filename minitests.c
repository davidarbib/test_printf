/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darbib <darbib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 13:45:46 by darbib            #+#    #+#             */
/*   Updated: 2019/11/23 20:33:41 by darbib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int ac, char **av)
{
	(void)ac;
	if (av[3] && strchr(av[3], 'n'))
	{
		printf(av[1], atoi(av[2]));
		return (0);
	}
	printf(av[1], av[2]);
	/*
	(void)av;
	printf("");
*/
}
