/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_trueprintf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darbib <darbib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 16:06:43 by darbib            #+#    #+#             */
/*   Updated: 2019/04/13 21:48:34 by darbib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testft_printf.h"

int main()
{
	true_d_tests();
	true_i_tests();
	true_o_tests();
	true_u_tests();
	/*true_x_tests();
	true_bigx_tests();
	true_c_tests();
	true_s_tests();
	true_p_tests();
	true_f_tests();
*/
/*	printf("%+u", 42);
	printf("%-u", 42);
	printf("%0u", 42);
	printf("% u", 42);
	printf("%#u", 42);
*/
	return(0);
}
