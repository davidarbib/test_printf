/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darbib <darbib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 00:39:55 by darbib            #+#    #+#             */
/*   Updated: 2019/12/11 23:13:47 by darbib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>

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

	mandatory_c(true_buf, my_buf, true_ret, my_ret);
	mandatory_s(true_buf, my_buf, true_ret, my_ret);
}
