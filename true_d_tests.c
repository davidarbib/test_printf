/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_tests.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darbib <darbib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:02:58 by darbib            #+#    #+#             */
/*   Updated: 2019/04/11 16:18:41 by darbib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testprintf.h"

void d_tests()
{
	printf("-------- conversion d ----------\n");
	printf("-------- simple ----------\n");
	printf("%d\n",printf("%d\n", 42));
	printf("%d\n",printf("%d\n", 0));
	printf("%d\n",printf("%d\n", -42));
	printf("%d\n",printf("%0d\n", 42));
	printf("%d\n",printf("%0d\n", 0));
	printf("%d\n",printf("%0d\n", -42));
	printf("%d\n",printf("%#d\n", 42));
	printf("%d\n",printf("%#d\n", 0));
	printf("%d\n",printf("%#d\n", -42));
	printf("%d\n",printf("%-d\n", 42));
	printf("%d\n",printf("%-d\n", 0));
	printf("%d\n",printf("%-d\n", -42));
	printf("%d\n",printf("% d\n", 42));
	printf("%d\n",printf("% d\n", 0));
	printf("%d\n",printf("% d\n", -42));
	printf("%d\n",printf("%+d\n", 42));
	printf("%d\n",printf("%+d\n", 0));
	printf("%d\n",printf("%+d\n", -42));
	printf("%d\n",printf("% d\n", 42));
	printf("%d\n",printf("% d\n", 0));
	printf("%d\n",printf("% d\n", -42));
	printf("%d\n",printf("%%d\n", 42));
	printf("%d\n",printf("%%d\n", 0));
	printf("%d\n",printf("%%d\n", -42));
	printf("%d\n",printf("%%0d\n", 42));
	printf("%d\n",printf("%%0d\n", 0));
	printf("%d\n",printf("%%0d\n", -42));
	printf("%d\n",printf("%%#d\n", 42));
	printf("%d\n",printf("%%#d\n", 0));
	printf("%d\n",printf("%%#d\n", -42));
	printf("%d\n",printf("%%-d\n", 42));
	printf("%d\n",printf("%%-d\n", 0));
	printf("%d\n",printf("%%-d\n", -42));
	printf("%d\n",printf("%% d\n", 42));
	printf("%d\n",printf("%% d\n", 0));
	printf("%d\n",printf("%% d\n", -42));
	printf("%d\n",printf("%%+d\n", 42));
	printf("%d\n",printf("%%+d\n", 0));
	printf("%d\n",printf("%%+d\n", -42));
	printf("%d\n",printf("%% d\n", 42));
	printf("%d\n",printf("%% d\n", 0));
	printf("%d\n",printf("%% d\n", -42));
	printf("%d\n",printf("%d\n", 42));
	printf("%d\n",printf("%d\n", 0));
	printf("%d\n",printf("%d\n", -42));
	printf("%d\n",printf("%0d\n", 42));
	printf("%d\n",printf("%0d\n", 0));
	printf("%d\n",printf("%0d\n", -42));
	printf("%d\n",printf("%#d\n", 42));
	printf("%d\n",printf("%#d\n", 0));
	printf("%d\n",printf("%#d\n", -42));
	printf("%d\n",printf("%-d\n", 42));
	printf("%d\n",printf("%-d\n", 0));
	printf("%d\n",printf("%-d\n", -42));
	printf("%d\n",printf("% d\n", 42));
	printf("%d\n",printf("% d\n", 0));
	printf("%d\n",printf("% d\n", -42));
	printf("%d\n",printf("%+d\n", 42));
	printf("%d\n",printf("%+d\n", 0));
	printf("%d\n",printf("%+d\n", -42));
	printf("%d\n",printf("% d\n", 42));
	printf("%d\n",printf("% d\n", 0));
	printf("%d\n",printf("% d\n", -42));

// -------- repetitive options ---------- 
	printf("------- n_options --------\n");
	printf("%d\n",printf("%++++++++++++++d\n", 42));
	printf("%d\n",printf("%++++++++++++++d\n", 0));
	printf("%d\n",printf("%++++++++++++++d\n", -42));
	printf("%d\n",printf("%---------------d\n", 42));
	printf("%d\n",printf("%---------------d\n", 0));
	printf("%d\n",printf("%---------------d\n", -42));
	printf("%d\n",printf("%###############d\n", 42));
	printf("%d\n",printf("%###############d\n", 0));
	printf("%d\n",printf("%###############d\n", -42));
	printf("%d\n",printf("%00000000000000000000d\n", 42));
	printf("%d\n",printf("%00000000000000000000d\n", 0));
	printf("%d\n",printf("%00000000000000000000d\n", -42));
	printf("%d\n",printf("%                    d\n", 42));
	printf("%d\n",printf("%                     d\n", 0));
	printf("%d\n",printf("%                     d\n", -42));

// ---------- mixed options -----------------
	printf("------- mixed --------\n");
	printf("%d\n",printf("%########++++++++d\n", 42));
	printf("%d\n",printf("%########++++++++d\n", 0));
	printf("%d\n",printf("%########++++++++d\n", -42));
	printf("%d\n",printf("%++++++++########d\n", 42));
	printf("%d\n",printf("%++++++++########d\n", 0));
	printf("%d\n",printf("%++++++++########d\n", -42));
	printf("%d\n",printf("%########--------d\n", 42));
	printf("%d\n",printf("%########--------d\n", 0));
	printf("%d\n",printf("%########--------d\n", -42));
	printf("%d\n",printf("%--------########d\n", 42));
	printf("%d\n",printf("%--------########d\n", 0));
	printf("%d\n",printf("%--------########d\n", -42));
	printf("%d\n",printf("%########00000000d\n", 42));
	printf("%d\n",printf("%########00000000d\n", 0));
	printf("%d\n",printf("%########00000000d\n", -42));
	printf("%d\n",printf("%00000000########d\n", 42));
	printf("%d\n",printf("%00000000########d\n", 0));
	printf("%d\n",printf("%00000000########d\n", -42));
	printf("%d\n",printf("%########        d\n", 42));
	printf("%d\n",printf("%########        d\n", 0));
	printf("%d\n",printf("%########        d\n", -42));
	printf("%d\n",printf("%        ########d\n", 42));
	printf("%d\n",printf("%        ########d\n", 0));
	printf("%d\n",printf("%        ########d\n", -42));
	printf("%d\n",printf("%++++++++--------d\n", 42));
	printf("%d\n",printf("%++++++++--------d\n", 0));
	printf("%d\n",printf("%++++++++--------d\n", -42));
	printf("%d\n",printf("%--------++++++++d\n", 42));
	printf("%d\n",printf("%--------++++++++d\n", 0));
	printf("%d\n",printf("%--------++++++++d\n", -42));
	printf("%d\n",printf("%++++++++########d\n", 42));
	printf("%d\n",printf("%++++++++########d\n", 0));
	printf("%d\n",printf("%++++++++########d\n", -42));
	printf("%d\n",printf("%########++++++++d\n", 42));
	printf("%d\n",printf("%########++++++++d\n", 0));
	printf("%d\n",printf("%########++++++++d\n", -42));
	printf("%d\n",printf("%++++++++00000000d\n", 42));
	printf("%d\n",printf("%++++++++00000000d\n", 0));
	printf("%d\n",printf("%++++++++00000000d\n", -42));
	printf("%d\n",printf("%00000000++++++++d\n", 42));
	printf("%d\n",printf("%00000000++++++++d\n", 0));
	printf("%d\n",printf("%00000000++++++++d\n", -42));
	printf("%d\n",printf("%++++++++        d\n", 42));
	printf("%d\n",printf("%++++++++        d\n", 0));
	printf("%d\n",printf("%++++++++        d\n", -42));
	printf("%d\n",printf("%        ++++++++d\n", 42));
	printf("%d\n",printf("%        ++++++++d\n", 0));
	printf("%d\n",printf("%        ++++++++d\n", -42));
	printf("%d\n",printf("%--------00000000d\n", 42));
	printf("%d\n",printf("%--------00000000d\n", 0));
	printf("%d\n",printf("%--------00000000d\n", -42));
	printf("%d\n",printf("%00000000--------d\n", 42));
	printf("%d\n",printf("%00000000--------d\n", 0));
	printf("%d\n",printf("%00000000--------d\n", -42));
	printf("%d\n",printf("%--------        d\n", 42));
	printf("%d\n",printf("%--------        d\n", 0));
	printf("%d\n",printf("%--------        d\n", -42));
	printf("%d\n",printf("%        --------d\n", 42));
	printf("%d\n",printf("%        --------d\n", 0));
	printf("%d\n",printf("%        --------d\n", -42));
	printf("%d\n",printf("%        00000000d\n", 42));
	printf("%d\n",printf("%        00000000d\n", 0));
	printf("%d\n",printf("%        00000000d\n", -42));
	printf("%d\n",printf("%00000000        d\n", 42));
	printf("%d\n",printf("%00000000        d\n", 0));
	printf("%d\n",printf("%00000000        d\n", -42));
	printf("%d\n",printf("%-+#0 d\n", 42));
	printf("%d\n",printf("%-+#0 d\n", 0));
	printf("%d\n",printf("%-+#0 d\n", -42));
	printf("%d\n",printf("%-+# 0d\n", 42));
	printf("%d\n",printf("%-+# 0d\n", 0));
	printf("%d\n",printf("%-+# 0d\n", -42));
	printf("%d\n",printf("%-+0 #d\n", 42));
	printf("%d\n",printf("%-+0 #d\n", 0));
	printf("%d\n",printf("%-+0 #d\n", -42));
	printf("%d\n",printf("%-+0# d\n", 42));
	printf("%d\n",printf("%-+0# d\n", 0));
	printf("%d\n",printf("%-+0# d\n", -42));
	printf("%d\n",printf("%+-#0 d\n", 42));
	printf("%d\n",printf("%+-#0 d\n", 0));
	printf("%d\n",printf("%+-#0 d\n", -42));
	printf("%d\n",printf("%+- #0d\n", 42));
	printf("%d\n",printf("%+- #0d\n", 0));
	printf("%d\n",printf("%+- #0d\n", -42));
	printf("%d\n",printf("%+- 0#d\n", 42));
	printf("%d\n",printf("%+- 0#d\n", 0));
	printf("%d\n",printf("%+- 0#d\n", -42));
	printf("%d\n",printf("%+ -#0d\n", 42));
	printf("%d\n",printf("%+ -#0d\n", 0));
	printf("%d\n",printf("%+ -#0d\n", -42));
	printf("%d\n",printf("%+ -0#d\n", 42));
	printf("%d\n",printf("%+ -0#d\n", 0));
	printf("%d\n",printf("%+ -0#d\n", -42));
	printf("%d\n",printf("% +-#0d\n", 42));
	printf("%d\n",printf("% +-#0d\n", 0));
	printf("%d\n",printf("% +-#0d\n", -42));
	printf("%d\n",printf("% +-0#d\n", 42));
	printf("%d\n",printf("% +-0#d\n", 0));
	printf("%d\n",printf("% +-0#d\n", -42));
	printf("%d\n",printf("% -+#0d\n", 42));
	printf("%d\n",printf("% -+#0d\n", 0));
	printf("%d\n",printf("% -+#0d\n", -42));
	printf("%d\n",printf("% -+0#d\n", 42));
	printf("%d\n",printf("% -+0#d\n", 0));
	printf("%d\n",printf("% -+0#d\n", -42));
	printf("%d\n",printf("%- +#0d\n", 42));
	printf("%d\n",printf("%- +#0d\n", 0));
	printf("%d\n",printf("%- +#0d\n", -42));
	printf("%d\n",printf("%- +0#d\n", 42));
	printf("%d\n",printf("%- +0#d\n", 0));
	printf("%d\n",printf("%- +0#d\n", -42));
	printf("%d\n",printf("%- #+0d\n", 42));
	printf("%d\n",printf("%- #+0d\n", 0));
	printf("%d\n",printf("%- #+0d\n", -42));
	printf("%d\n",printf("%- 0+#d\n", 42));
	printf("%d\n",printf("%- 0+#d\n", 0));
	printf("%d\n",printf("%- 0+#d\n", -42));
	printf("%d\n",printf("%- #0+d\n", 42));
	printf("%d\n",printf("%- #0+d\n", 0));
	printf("%d\n",printf("%- #0+d\n", -42));
	printf("%d\n",printf("%- 0#+d\n", 42));
	printf("%d\n",printf("%- 0#+d\n", 0));
	printf("%d\n",printf("%- 0#+d\n", -42));
	printf("%d\n",printf("% -+#0d\n", 42));
	printf("%d\n",printf("% -+#0d\n", 0));
	printf("%d\n",printf("% -+#0d\n", -42));
	printf("%d\n",printf("% -+0#d\n", 42));
	printf("%d\n",printf("% -+0#d\n", 0));
	printf("%d\n",printf("% -+0#d\n", -42));
	printf("%d\n",printf("% -#+0d\n", 42));
	printf("%d\n",printf("% -#+0d\n", 0));
	printf("%d\n",printf("% -#+0d\n", -42));
	printf("%d\n",printf("% -0+#d\n", 42));
	printf("%d\n",printf("% -0+#d\n", 0));
	printf("%d\n",printf("% -0+#d\n", -42));
	printf("%d\n",printf("% -#0+d\n", 42));
	printf("%d\n",printf("% -#0+d\n", 0));
	printf("%d\n",printf("% -#0+d\n", -42));
	printf("%d\n",printf("% -0#+d\n", 42));
	printf("%d\n",printf("% -0#+d\n", 0));
	printf("%d\n",printf("% -0#+d\n", -42));
	printf("%d\n",printf("% +#-0d\n", 42));
	printf("%d\n",printf("% +#-0d\n", 0));
	printf("%d\n",printf("% +#-0d\n", -42));
	printf("%d\n",printf("% +0-#d\n", 42));
	printf("%d\n",printf("% +0-#d\n", 0));
	printf("%d\n",printf("% +0-#d\n", -42));
	printf("%d\n",printf("% -#+0d\n", 42));
	printf("%d\n",printf("% -#+0d\n", 0));
	printf("%d\n",printf("% -#+0d\n", -42));
	printf("%d\n",printf("% -0+#d\n", 42));
	printf("%d\n",printf("% -0+#d\n", 0));
	printf("%d\n",printf("% -0+#d\n", -42));
	printf("%d\n",printf("% -#0+d\n", 42));
	printf("%d\n",printf("% -#0+d\n", 0));
	printf("%d\n",printf("% -#0+d\n", -42));
	printf("%d\n",printf("% -0#+d\n", 42));
	printf("%d\n",printf("% -0#+d\n", 0));
	printf("%d\n",printf("% -0#+d\n", -42));

// ---------- LMC & precision ---------

	printf("------- LMC --------\n");
	printf("%d\n",printf("%3d", 42));
	printf("%d\n",printf("%3d", 0));
	printf("%d\n",printf("%3d", -42));
	printf("%d\n",printf("%.7d", 42));
	printf("%d\n",printf("%.7d", 0));
	printf("%d\n",printf("%.7d", -42));
	printf("%d\n",printf("%3.7d", 42));
	printf("%d\n",printf("%3.7d", 0));
	printf("%d\n",printf("%3.7d", -42));

// --------- sizes ----------

	printf("------- sizes --------\n");
	printf("%d\n",printf("%hd\n", (short)42));
	printf("%d\n",printf("%hd\n", (short)0));
	printf("%d\n",printf("%hd\n", (short)-42));
	printf("%d\n",printf("%hhd\n", (char)42));
	printf("%d\n",printf("%hhd\n", (char)0));
	printf("%d\n",printf("%hhd\n", (char)-42));
	printf("%d\n",printf("%ld\n", (long)42));
	printf("%d\n",printf("%ld\n", (long)0));
	printf("%d\n",printf("%ld\n", (long)-42));
	printf("%d\n",printf("%lld\n", (long long)42));
	printf("%d\n",printf("%lld\n", (long long)0));
	printf("%d\n",printf("%lld\n", (long long)-42));

// ---------- repetitive conversions --------

	printf("------- n_conversions --------\n");
	printf("%d\n",printf("%d%d%d\n", 42, 0, -42));
	printf("%d\n",printf("%d    %d           %d\n", 42, 0, -42));
	printf("%d\n",printf("%#d% d%0d\n", 42, 0, -42));
	printf("%d\n", printf("%ld%hd%d\n", (long)42, (short)0, -42));

// ----------- invalid printf ---------

	printf("------- invalid --------\n");
	printf("%d\n", printf("aha!\n", 42));
	printf("%d\n", printf("%d\n"));
	printf("%d\n", printf("%#d\n", 42));
	printf("%d\n", printf("%h\n"));
	printf("%d\n", printf("%yd\n", 42));
	printf("%d\n", printf("%ll3.5\n", 42));
	printf("%d\n", printf("%ld%hd%d\n", (short)42, (long)0, -42));
	printf("%d\n", printf("%ld%hd%d\n", (short)42, 0, (long)-42));
	return (0);
}
