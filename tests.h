/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darbib <darbib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 14:05:37 by darbib            #+#    #+#             */
/*   Updated: 2019/12/11 14:21:11 by darbib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTFT_PRINTF_H
# define TESTFT_PRINTF_H

//#include "ft_printf.h"
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


void	mandatory_c();
/*
void	non_conversion();
void	d_tests();
void	i_tests();
void	o_tests();
void	u_tests();
void	x_tests();
void	bigx_tests();
void	s_tests();
void	p_tests();
void	f_tests();
void	true_d_tests();
void	true_i_tests();
void	true_o_tests();
void	true_u_tests();
void	true_x_tests();
void	true_bigx_tests();
void	true_c_tests();
void	true_s_tests();
void	true_p_tests();
void	true_f_tests();
*/
#endif
