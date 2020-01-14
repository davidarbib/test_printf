/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darbib <darbib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 14:05:37 by darbib            #+#    #+#             */
/*   Updated: 2020/01/13 16:43:17 by darbib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTFT_PRINTF_H
# define TESTFT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "ft_sprintf.h"

# define RED     "\x1b[31m"
# define RED8	"\x1b[38;5;1m\x1b[48;5;7m"
# define GREEN   "\x1b[32m"
# define YELLOW  "\x1b[33m"
# define BLUE    "\x1b[34m"
# define MAGENTA "\x1b[35m"
# define CYAN    "\x1b[36m"
# define RESET   "\x1b[0m"

void	test_print(char *true_buf, char *my_buf, int true_ret,
		int my_ret, int line, char *file);
void mandatory_c(char *true_buf, char *my_buf, int true_ret, int my_ret);
void mandatory_s(char *true_buf, char *my_buf, int true_ret, int my_ret);
void mandatory_p(char *true_buf, char *my_buf, int true_ret, int my_ret);
void mandatory_d(char *true_buf, char *my_buf, int true_ret, int my_ret);

#endif
