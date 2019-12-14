/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darbib <darbib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 00:39:55 by darbib            #+#    #+#             */
/*   Updated: 2019/12/12 17:43:44 by darbib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include "tests.h"
#include <stdio.h>

int nb_tests = 0;
int nb_success = 0;

void	test_print(char *true_buf, char *my_buf, int true_ret,
		int my_ret, int line, char *file)
{
	nb_tests++;
	nb_success++;
	if (strcmp(true_buf, my_buf))
		printf(RED "conversion" RESET " error at line" CYAN " %d " RESET "in file" MAGENTA " %s" RESET "\n", line, file);
	if (true_ret != my_ret)
		printf(RED "return" RESET " error at line" CYAN " %d " RESET "in file" MAGENTA " %s" RESET "\n", line, file);
	if (strcmp(true_buf, my_buf) || (true_ret != my_ret))
		nb_success--;	
}

int main()
{
	int true_ret = 0;
	int my_ret = 0;
	char *true_buf = calloc(1000000, sizeof(char));
	char *my_buf = calloc(1000000, sizeof(char));

	mandatory_c(true_buf, my_buf, true_ret, my_ret);
	mandatory_s(true_buf, my_buf, true_ret, my_ret);
	mandatory_p(true_buf, my_buf, true_ret, my_ret);
	printf(GREEN "passed tests " RESET RED "[%d/%d]" RESET "\n", nb_success,
			nb_tests);
	if (nb_tests == nb_success)
		printf("		" YELLOW "Congrats!!!" RESET "			\n");
}
