/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ourprintf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darbib <darbib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:02:58 by darbib            #+#    #+#             */
/*   Updated: 2019/04/11 14:47:01 by darbib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftft_printf.h"
#include "testft_printf.h"
#include <stdio.h>


int main()
{
	printf("%d\n",ft_printf("%d\n", 42));
	printf("%d\n",ft_printf("%d\n", 0));
	printf("%d\n",ft_printf("%d\n", -42));
	printf("%d\n",ft_printf("%0d\n", 42));
	printf("%d\n",ft_printf("%0d\n", 0));
	printf("%d\n",ft_printf("%0d\n", -42));
	printf("%d\n",ft_printf("%#d\n", 42));
	printf("%d\n",ft_printf("%#d\n", 0));
	printf("%d\n",ft_printf("%#d\n", -42));
	printf("%d\n",ft_printf("%-d\n", 42));
	printf("%d\n",ft_printf("%-d\n", 0));
	printf("%d\n",ft_printf("%-d\n", -42));
	printf("%d\n",ft_printf("% d\n", 42));
	printf("%d\n",ft_printf("% d\n", 0));
	printf("%d\n",ft_printf("% d\n", -42));
	printf("%d\n",ft_printf("%+d\n", 42));
	printf("%d\n",ft_printf("%+d\n", 0));
	printf("%d\n",ft_printf("%+d\n", -42));
	printf("%d\n",ft_printf("% d\n", 42));
	printf("%d\n",ft_printf("% d\n", 0));
	printf("%d\n",ft_printf("% d\n", -42));
	printf("%d\n",ft_printf("%%d\n", 42));
	printf("%d\n",ft_printf("%%d\n", 0));
	printf("%d\n",ft_printf("%%d\n", -42));
	printf("%d\n",ft_printf("%%0d\n", 42));
	printf("%d\n",ft_printf("%%0d\n", 0));
	printf("%d\n",ft_printf("%%0d\n", -42));
	printf("%d\n",ft_printf("%%#d\n", 42));
	printf("%d\n",ft_printf("%%#d\n", 0));
	printf("%d\n",ft_printf("%%#d\n", -42));
	printf("%d\n",ft_printf("%%-d\n", 42));
	printf("%d\n",ft_printf("%%-d\n", 0));
	printf("%d\n",ft_printf("%%-d\n", -42));
	printf("%d\n",ft_printf("%% d\n", 42));
	printf("%d\n",ft_printf("%% d\n", 0));
	printf("%d\n",ft_printf("%% d\n", -42));
	printf("%d\n",ft_printf("%%+d\n", 42));
	printf("%d\n",ft_printf("%%+d\n", 0));
	printf("%d\n",ft_printf("%%+d\n", -42));
	printf("%d\n",ft_printf("%% d\n", 42));
	printf("%d\n",ft_printf("%% d\n", 0));
	printf("%d\n",ft_printf("%% d\n", -42));
	printf("%d\n",ft_printf("%d\n", 42));
	printf("%d\n",ft_printf("%d\n", 0));
	printf("%d\n",ft_printf("%d\n", -42));
	printf("%d\n",ft_printf("%0d\n", 42));
	printf("%d\n",ft_printf("%0d\n", 0));
	printf("%d\n",ft_printf("%0d\n", -42));
	printf("%d\n",ft_printf("%#d\n", 42));
	printf("%d\n",ft_printf("%#d\n", 0));
	printf("%d\n",ft_printf("%#d\n", -42));
	printf("%d\n",ft_printf("%-d\n", 42));
	printf("%d\n",ft_printf("%-d\n", 0));
	printf("%d\n",ft_printf("%-d\n", -42));
	printf("%d\n",ft_printf("% d\n", 42));
	printf("%d\n",ft_printf("% d\n", 0));
	printf("%d\n",ft_printf("% d\n", -42));
	printf("%d\n",ft_printf("%+d\n", 42));
	printf("%d\n",ft_printf("%+d\n", 0));
	printf("%d\n",ft_printf("%+d\n", -42));
	printf("%d\n",ft_printf("% d\n", 42));
	printf("%d\n",ft_printf("% d\n", 0));
	printf("%d\n",ft_printf("% d\n", -42));

// -------- repetitive options ---------- 
	printf("%d\n",ft_printf("%++++++++++++++d\n", 42));
	printf("%d\n",ft_printf("%++++++++++++++d\n", 0));
	printf("%d\n",ft_printf("%++++++++++++++d\n", -42));
	printf("%d\n",ft_printf("%---------------d\n", 42));
	printf("%d\n",ft_printf("%---------------d\n", 0));
	printf("%d\n",ft_printf("%---------------d\n", -42));
	printf("%d\n",ft_printf("%###############d\n", 42));
	printf("%d\n",ft_printf("%###############d\n", 0));
	printf("%d\n",ft_printf("%###############d\n", -42));
	printf("%d\n",ft_printf("%00000000000000000000d\n", 42));
	printf("%d\n",ft_printf("%00000000000000000000d\n", 0));
	printf("%d\n",ft_printf("%00000000000000000000d\n", -42));
	printf("%d\n",ft_printf("%                    d\n", 42));
	printf("%d\n",ft_printf("%                     d\n", 0));
	printf("%d\n",ft_printf("%                     d\n", -42));

// ---------- mixed options -----------------
	printf("%d\n",ft_printf("%########++++++++d\n", 42));
	printf("%d\n",ft_printf("%########++++++++d\n", 0));
	printf("%d\n",ft_printf("%########++++++++d\n", -42));
	printf("%d\n",ft_printf("%++++++++########d\n", 42));
	printf("%d\n",ft_printf("%++++++++########d\n", 0));
	printf("%d\n",ft_printf("%++++++++########d\n", -42));
	printf("%d\n",ft_printf("%########--------d\n", 42));
	printf("%d\n",ft_printf("%########--------d\n", 0));
	printf("%d\n",ft_printf("%########--------d\n", -42));
	printf("%d\n",ft_printf("%--------########d\n", 42));
	printf("%d\n",ft_printf("%--------########d\n", 0));
	printf("%d\n",ft_printf("%--------########d\n", -42));
	printf("%d\n",ft_printf("%########00000000d\n", 42));
	printf("%d\n",ft_printf("%########00000000d\n", 0));
	printf("%d\n",ft_printf("%########00000000d\n", -42));
	printf("%d\n",ft_printf("%00000000########d\n", 42));
	printf("%d\n",ft_printf("%00000000########d\n", 0));
	printf("%d\n",ft_printf("%00000000########d\n", -42));
	printf("%d\n",ft_printf("%########        d\n", 42));
	printf("%d\n",ft_printf("%########        d\n", 0));
	printf("%d\n",ft_printf("%########        d\n", -42));
	printf("%d\n",ft_printf("%        ########d\n", 42));
	printf("%d\n",ft_printf("%        ########d\n", 0));
	printf("%d\n",ft_printf("%        ########d\n", -42));
	printf("%d\n",ft_printf("%++++++++--------d\n", 42));
	printf("%d\n",ft_printf("%++++++++--------d\n", 0));
	printf("%d\n",ft_printf("%++++++++--------d\n", -42));
	printf("%d\n",ft_printf("%--------++++++++d\n", 42));
	printf("%d\n",ft_printf("%--------++++++++d\n", 0));
	printf("%d\n",ft_printf("%--------++++++++d\n", -42));
	printf("%d\n",ft_printf("%++++++++########d\n", 42));
	printf("%d\n",ft_printf("%++++++++########d\n", 0));
	printf("%d\n",ft_printf("%++++++++########d\n", -42));
	printf("%d\n",ft_printf("%########++++++++d\n", 42));
	printf("%d\n",ft_printf("%########++++++++d\n", 0));
	printf("%d\n",ft_printf("%########++++++++d\n", -42));
	printf("%d\n",ft_printf("%++++++++00000000d\n", 42));
	printf("%d\n",ft_printf("%++++++++00000000d\n", 0));
	printf("%d\n",ft_printf("%++++++++00000000d\n", -42));
	printf("%d\n",ft_printf("%00000000++++++++d\n", 42));
	printf("%d\n",ft_printf("%00000000++++++++d\n", 0));
	printf("%d\n",ft_printf("%00000000++++++++d\n", -42));
	printf("%d\n",ft_printf("%++++++++        d\n", 42));
	printf("%d\n",ft_printf("%++++++++        d\n", 0));
	printf("%d\n",ft_printf("%++++++++        d\n", -42));
	printf("%d\n",ft_printf("%        ++++++++d\n", 42));
	printf("%d\n",ft_printf("%        ++++++++d\n", 0));
	printf("%d\n",ft_printf("%        ++++++++d\n", -42));
	printf("%d\n",ft_printf("%--------00000000d\n", 42));
	printf("%d\n",ft_printf("%--------00000000d\n", 0));
	printf("%d\n",ft_printf("%--------00000000d\n", -42));
	printf("%d\n",ft_printf("%00000000--------d\n", 42));
	printf("%d\n",ft_printf("%00000000--------d\n", 0));
	printf("%d\n",ft_printf("%00000000--------d\n", -42));
	printf("%d\n",ft_printf("%--------        d\n", 42));
	printf("%d\n",ft_printf("%--------        d\n", 0));
	printf("%d\n",ft_printf("%--------        d\n", -42));
	printf("%d\n",ft_printf("%        --------d\n", 42));
	printf("%d\n",ft_printf("%        --------d\n", 0));
	printf("%d\n",ft_printf("%        --------d\n", -42));
	printf("%d\n",ft_printf("%        00000000d\n", 42));
	printf("%d\n",ft_printf("%        00000000d\n", 0));
	printf("%d\n",ft_printf("%        00000000d\n", -42));
	printf("%d\n",ft_printf("%00000000        d\n", 42));
	printf("%d\n",ft_printf("%00000000        d\n", 0));
	printf("%d\n",ft_printf("%00000000        d\n", -42));
	printf("%d\n",ft_printf("%-+#0 d\n", 42));
	printf("%d\n",ft_printf("%-+#0 d\n", 0));
	printf("%d\n",ft_printf("%-+#0 d\n", -42));
	printf("%d\n",ft_printf("%-+# 0d\n", 42));
	printf("%d\n",ft_printf("%-+# 0d\n", 0));
	printf("%d\n",ft_printf("%-+# 0d\n", -42));
	printf("%d\n",ft_printf("%-+0 #d\n", 42));
	printf("%d\n",ft_printf("%-+0 #d\n", 0));
	printf("%d\n",ft_printf("%-+0 #d\n", -42));
	printf("%d\n",ft_printf("%-+0# d\n", 42));
	printf("%d\n",ft_printf("%-+0# d\n", 0));
	printf("%d\n",ft_printf("%-+0# d\n", -42));
	printf("%d\n",ft_printf("%+-#0 d\n", 42));
	printf("%d\n",ft_printf("%+-#0 d\n", 0));
	printf("%d\n",ft_printf("%+-#0 d\n", -42));
	printf("%d\n",ft_printf("%+- #0d\n", 42));
	printf("%d\n",ft_printf("%+- #0d\n", 0));
	printf("%d\n",ft_printf("%+- #0d\n", -42));
	printf("%d\n",ft_printf("%+- 0#d\n", 42));
	printf("%d\n",ft_printf("%+- 0#d\n", 0));
	printf("%d\n",ft_printf("%+- 0#d\n", -42));
	printf("%d\n",ft_printf("%+ -#0d\n", 42));
	printf("%d\n",ft_printf("%+ -#0d\n", 0));
	printf("%d\n",ft_printf("%+ -#0d\n", -42));
	printf("%d\n",ft_printf("%+ -0#d\n", 42));
	printf("%d\n",ft_printf("%+ -0#d\n", 0));
	printf("%d\n",ft_printf("%+ -0#d\n", -42));
	printf("%d\n",ft_printf("% +-#0d\n", 42));
	printf("%d\n",ft_printf("% +-#0d\n", 0));
	printf("%d\n",ft_printf("% +-#0d\n", -42));
	printf("%d\n",ft_printf("% +-0#d\n", 42));
	printf("%d\n",ft_printf("% +-0#d\n", 0));
	printf("%d\n",ft_printf("% +-0#d\n", -42));
	printf("%d\n",ft_printf("% -+#0d\n", 42));
	printf("%d\n",ft_printf("% -+#0d\n", 0));
	printf("%d\n",ft_printf("% -+#0d\n", -42));
	printf("%d\n",ft_printf("% -+0#d\n", 42));
	printf("%d\n",ft_printf("% -+0#d\n", 0));
	printf("%d\n",ft_printf("% -+0#d\n", -42));
	printf("%d\n",ft_printf("%- +#0d\n", 42));
	printf("%d\n",ft_printf("%- +#0d\n", 0));
	printf("%d\n",ft_printf("%- +#0d\n", -42));
	printf("%d\n",ft_printf("%- +0#d\n", 42));
	printf("%d\n",ft_printf("%- +0#d\n", 0));
	printf("%d\n",ft_printf("%- +0#d\n", -42));
	printf("%d\n",ft_printf("%- #+0d\n", 42));
	printf("%d\n",ft_printf("%- #+0d\n", 0));
	printf("%d\n",ft_printf("%- #+0d\n", -42));
	printf("%d\n",ft_printf("%- 0+#d\n", 42));
	printf("%d\n",ft_printf("%- 0+#d\n", 0));
	printf("%d\n",ft_printf("%- 0+#d\n", -42));
	printf("%d\n",ft_printf("%- #0+d\n", 42));
	printf("%d\n",ft_printf("%- #0+d\n", 0));
	printf("%d\n",ft_printf("%- #0+d\n", -42));
	printf("%d\n",ft_printf("%- 0#+d\n", 42));
	printf("%d\n",ft_printf("%- 0#+d\n", 0));
	printf("%d\n",ft_printf("%- 0#+d\n", -42));
	printf("%d\n",ft_printf("% -+#0d\n", 42));
	printf("%d\n",ft_printf("% -+#0d\n", 0));
	printf("%d\n",ft_printf("% -+#0d\n", -42));
	printf("%d\n",ft_printf("% -+0#d\n", 42));
	printf("%d\n",ft_printf("% -+0#d\n", 0));
	printf("%d\n",ft_printf("% -+0#d\n", -42));
	printf("%d\n",ft_printf("% -#+0d\n", 42));
	printf("%d\n",ft_printf("% -#+0d\n", 0));
	printf("%d\n",ft_printf("% -#+0d\n", -42));
	printf("%d\n",ft_printf("% -0+#d\n", 42));
	printf("%d\n",ft_printf("% -0+#d\n", 0));
	printf("%d\n",ft_printf("% -0+#d\n", -42));
	printf("%d\n",ft_printf("% -#0+d\n", 42));
	printf("%d\n",ft_printf("% -#0+d\n", 0));
	printf("%d\n",ft_printf("% -#0+d\n", -42));
	printf("%d\n",ft_printf("% -0#+d\n", 42));
	printf("%d\n",ft_printf("% -0#+d\n", 0));
	printf("%d\n",ft_printf("% -0#+d\n", -42));
	printf("%d\n",ft_printf("% +#-0d\n", 42));
	printf("%d\n",ft_printf("% +#-0d\n", 0));
	printf("%d\n",ft_printf("% +#-0d\n", -42));
	printf("%d\n",ft_printf("% +0-#d\n", 42));
	printf("%d\n",ft_printf("% +0-#d\n", 0));
	printf("%d\n",ft_printf("% +0-#d\n", -42));
	printf("%d\n",ft_printf("% -#+0d\n", 42));
	printf("%d\n",ft_printf("% -#+0d\n", 0));
	printf("%d\n",ft_printf("% -#+0d\n", -42));
	printf("%d\n",ft_printf("% -0+#d\n", 42));
	printf("%d\n",ft_printf("% -0+#d\n", 0));
	printf("%d\n",ft_printf("% -0+#d\n", -42));
	printf("%d\n",ft_printf("% -#0+d\n", 42));
	printf("%d\n",ft_printf("% -#0+d\n", 0));
	printf("%d\n",ft_printf("% -#0+d\n", -42));
	printf("%d\n",ft_printf("% -0#+d\n", 42));
	printf("%d\n",ft_printf("% -0#+d\n", 0));
	printf("%d\n",ft_printf("% -0#+d\n", -42));

// ---------- LMC & precision ---------

	printf("%d\n",ft_printf("%3d", 42));
	printf("%d\n",ft_printf("%3d", 0));
	printf("%d\n",ft_printf("%3d", -42));
	printf("%d\n",ft_printf("%.7d", 42));
	printf("%d\n",ft_printf("%.7d", 0));
	printf("%d\n",ft_printf("%.7d", -42));
	printf("%d\n",ft_printf("%3.7d", 42));
	printf("%d\n",ft_printf("%3.7d", 0));
	printf("%d\n",ft_printf("%3.7d", -42));

// --------- sizes ----------

	printf("%d\n",ft_printf("%hd\n", (short)42));
	printf("%d\n",ft_printf("%hd\n", (short)0));
	printf("%d\n",ft_printf("%hd\n", (short)-42));
	printf("%d\n",ft_printf("%hhd\n", (char)42));
	printf("%d\n",ft_printf("%hhd\n", (char)0));
	printf("%d\n",ft_printf("%hhd\n", (char)-42));
	printf("%d\n",ft_printf("%ld\n", (long)42));
	printf("%d\n",ft_printf("%ld\n", (long)0));
	printf("%d\n",ft_printf("%ld\n", (long)-42));
	printf("%d\n",ft_printf("%lld\n", (long long)42));
	printf("%d\n",ft_printf("%lld\n", (long long)0));
	printf("%d\n",ft_printf("%lld\n", (long long)-42));

// ---------- repetitive conversions --------

	printf("%d\n",ft_printf("%d%d%d\n", 42, 0, -42));
	printf("%d\n",ft_printf("%d    %d           %d\n", 42, 0, -42));
	printf("%d\n",ft_printf("%#d% d%0d\n", 42, 0, -42));
	printf("%d\n", ft_printf("%ld%hd%d\n", (long)42, (short)0, -42)));
	printf("%d\n",ft_printf("%d% d%0d\n", 42, 0, -42));
	printf("%d\n",ft_printf("%d% d%0d\n", 42, 0, -42));
	printf("%d\n",ft_printf("%d% d%0d\n", 42, 0, -42));
	printf("%d\n",ft_printf("%d% d%0d\n", 42, 0, -42));
	printf("%d\n",ft_printf("%d% d%0d\n", 42, 0, -42));
	printf("%d\n",ft_printf("%d% d%0d\n", 42, 0, -42));
	printf("%d\n",ft_printf("%d% d%0d\n", 42, 0, -42));
	printf("%d\n",ft_printf("%d% d%0d\n", 42, 0, -42));
	printf("%d\n",ft_printf("%d% d%0d\n", 42, 0, -42));
	printf("%d\n",ft_printf("%d% d%0d\n", 42, 0, -42));
	printf("%d\n",ft_printf("%d% d%0d\n", 42, 0, -42));
	printf("%d\n",ft_printf("%d% d%0d\n", 42, 0, -42));
	printf("%d\n",ft_printf("%d% d%0d\n", 42, 0, -42));

// ----------- invalid printf ---------

	printf("%d\n", ft_printf("aha!\n", 42));
	printf("%d\n", ft_printf("%d\n"));
	printf("%d\n", ft_printf("%#d\n", 42));
	printf("%d\n", ft_printf("%h\n"));
	printf("%d\n", ft_printf("%yd\n", 42));
	printf("%d\n", ft_printf("%ll3.5\n", 42));
	printf("%d\n", ft_printf("%ld%hd%d\n", (short)42, (long)0, -42));
	printf("%d\n", ft_printf("%ld%hd%d\n", (short)42, 0, (long)-42));
	d_tests();
	chars_tests();
	mixed_tests();
	bonus_tests();
	return (0);
}
