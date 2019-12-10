/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darbib <darbib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 00:39:55 by darbib            #+#    #+#             */
/*   Updated: 2019/12/11 00:43:13 by darbib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "ft_sprintf.h"
#define RED     "\x1b[31m"
#define RED8	"\x1b[38;5;1m\x1b[48;5;7m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

void	test_print(char *true_buf, char *my_buf, int true_ret,
		int my_ret, int line, char *file)
{
	if (strcmp(true_buf, my_buf))
		printf(RED "conversion" RESET " error at line" CYAN " %d " RESET "in file" MAGENTA " %s" RESET "\n", line, file);
	if (true_ret != my_ret)
		printf(RED "return" RESET " error at line" CYAN " %d " RESET "in file" MAGENTA " %s" RESET "\n", line, file);
}

int main()
{
	int true_ret;
	int my_ret;
	char *true_buf = calloc(1000000, sizeof(char));
	char *my_buf = calloc(1000000, sizeof(char));

	true_ret = sprintf(true_buf, "Bonjour\n");
	my_ret = ft_sprintf(my_buf, "Bonjour\n");
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
}
