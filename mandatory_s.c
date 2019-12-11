/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandatory_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darbib <darbib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 23:10:55 by darbib            #+#    #+#             */
/*   Updated: 2019/12/11 23:56:13 by darbib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void mandatory_s(char *true_buf, char *my_buf, int true_ret, int my_ret)
{
//				--------simple-------
	true_ret = sprintf(true_buf, "%s", "");
	my_ret = ft_sprintf(my_buf, "%s", "");
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%s", "ceci est un test");
	my_ret = ft_sprintf(my_buf, "%s", "ceci est un test");
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%s", NULL);
	my_ret = ft_sprintf(my_buf, "%s", NULL);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
//				----------lmc----------
	true_ret = sprintf(true_buf, "%3s", "");
	my_ret = ft_sprintf(my_buf, "%3s", "");
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%3s", "ceci est un test");
	my_ret = ft_sprintf(my_buf, "%3s", "ceci est un test");
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%3s", NULL);
	my_ret = ft_sprintf(my_buf, "%3s", NULL);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%50s", "");
	my_ret = ft_sprintf(my_buf, "%50s", "");
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%50s", "ceci est un test");
	my_ret = ft_sprintf(my_buf, "%50s", "ceci est un test");
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%50s", NULL);
	my_ret = ft_sprintf(my_buf, "%50s", NULL);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%2147483647s", "");
	my_ret = ft_sprintf(my_buf, "%2147483647s", "");
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%2147483647s", "ceci est un test");
	my_ret = ft_sprintf(my_buf, "%2147483647s", "ceci est un test");
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%2147483647s", NULL);
	my_ret = ft_sprintf(my_buf, "%2147483647s", NULL);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
//				----------option---------
	true_ret = sprintf(true_buf, "%-s", "");
	my_ret = ft_sprintf(my_buf, "%-s", "");
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%-s", "ceci est un test");
	my_ret = ft_sprintf(my_buf, "%-s", "ceci est un test");
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%-s", NULL);
	my_ret = ft_sprintf(my_buf, "%-s", NULL);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%-10s", "");
	my_ret = ft_sprintf(my_buf, "%-10s", "");
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%-10s", "ceci est un test");
	my_ret = ft_sprintf(my_buf, "%-10s", "ceci est un test");
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%-10s", NULL);
	my_ret = ft_sprintf(my_buf, "%-10s", NULL);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
//				-----------mix---------
	true_ret = sprintf(true_buf, "		jeldkjfl   skjl%s	%s", "ok", "");
	my_ret = ft_sprintf(my_buf, "		jeldkjfl   skjl%s	%s", "ok", "");
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "%s%s      %s", "", NULL, NULL);
	my_ret = ft_sprintf(my_buf, "%s%s      %s", "", NULL, NULL);
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
	true_ret = sprintf(true_buf, "    %10s %-36s", NULL, "ok");
	my_ret = ft_sprintf(my_buf, "    %10s %-36s", NULL, "ok");
	test_print(true_buf, my_buf, true_ret, my_ret, __LINE__, __FILE__);
}
