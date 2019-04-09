/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darbib <darbib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:02:58 by darbib            #+#    #+#             */
/*   Updated: 2019/04/09 15:57:53 by darbib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "testprintf.h"
#include <stdio.h>


int main()
{
	printf("%d\n", 42);
	printf("%d\n", 0);
	printf("%d\n", -42);
	printf("%0d\n", 42);
	printf("%0d\n", 0);
	printf("%0d\n", -42);
	printf("%#d\n", 42);
	printf("%#d\n", 0);
	printf("%#d\n", -42);
	printf("%-d\n", 42);
	printf("%-d\n", 0);
	printf("%-d\n", -42);
	printf("% d\n", 42);
	printf("% d\n", 0);
	printf("% d\n", -42);
	printf("%+d\n", 42);
	printf("%+d\n", 0);
	printf("%+d\n", -42);
	printf("% d\n", 42);
	printf("% d\n", 0);
	printf("% d\n", -42);
	printf("%%d\n", 42);
	printf("%%d\n", 0);
	printf("%%d\n", -42);
	printf("%%0d\n", 42);
	printf("%%0d\n", 0);
	printf("%%0d\n", -42);
	printf("%%#d\n", 42);
	printf("%%#d\n", 0);
	printf("%%#d\n", -42);
	printf("%%-d\n", 42);
	printf("%%-d\n", 0);
	printf("%%-d\n", -42);
	printf("%% d\n", 42);
	printf("%% d\n", 0);
	printf("%% d\n", -42);
	printf("%%+d\n", 42);
	printf("%%+d\n", 0);
	printf("%%+d\n", -42);
	printf("%% d\n", 42);
	printf("%% d\n", 0);
	printf("%% d\n", -42);
	printf("%d\n", 42);
	printf("%d\n", 0);
	printf("%d\n", -42);
	printf("%0d\n", 42);
	printf("%0d\n", 0);
	printf("%0d\n", -42);
	printf("%#d\n", 42);
	printf("%#d\n", 0);
	printf("%#d\n", -42);
	printf("%-d\n", 42);
	printf("%-d\n", 0);
	printf("%-d\n", -42);
	printf("% d\n", 42);
	printf("% d\n", 0);
	printf("% d\n", -42);
	printf("%+d\n", 42);
	printf("%+d\n", 0);
	printf("%+d\n", -42);
	printf("% d\n", 42);
	printf("% d\n", 0);
	printf("% d\n", -42);

// -------- repetitive options ---------- 
	printf("%++++++++++++++d\n", 42);
	printf("%++++++++++++++d\n", 0);
	printf("%++++++++++++++d\n", -42);
	printf("%---------------d\n", 42);
	printf("%---------------d\n", 0);
	printf("%---------------d\n", -42);
	printf("%###############d\n", 42);
	printf("%###############d\n", 0);
	printf("%###############d\n", -42);
	printf("%00000000000000000000d\n", 42);
	printf("%00000000000000000000d\n", 0);
	printf("%00000000000000000000d\n", -42);
	printf("%                    d\n", 42);
	printf("%                     d\n", 0);
	printf("%                     d\n", -42);

// ---------- mixed options -----------------
	printf("%########++++++++d\n", 42);
	printf("%########++++++++d\n", 0);
	printf("%########++++++++d\n", -42);
	printf("%++++++++########d\n", 42);
	printf("%++++++++########d\n", 0);
	printf("%++++++++########d\n", -42);
	printf("%########--------d\n", 42);
	printf("%########--------d\n", 0);
	printf("%########--------d\n", -42);
	printf("%--------########d\n", 42);
	printf("%--------########d\n", 0);
	printf("%--------########d\n", -42);
	printf("%########00000000d\n", 42);
	printf("%########00000000d\n", 0);
	printf("%########00000000d\n", -42);
	printf("%00000000########d\n", 42);
	printf("%00000000########d\n", 0);
	printf("%00000000########d\n", -42);
	printf("%########        d\n", 42);
	printf("%########        d\n", 0);
	printf("%########        d\n", -42);
	printf("%        ########d\n", 42);
	printf("%        ########d\n", 0);
	printf("%        ########d\n", -42);
	printf("%++++++++--------d\n", 42);
	printf("%++++++++--------d\n", 0);
	printf("%++++++++--------d\n", -42);
	printf("%--------++++++++d\n", 42);
	printf("%--------++++++++d\n", 0);
	printf("%--------++++++++d\n", -42);
	printf("%++++++++########d\n", 42);
	printf("%++++++++########d\n", 0);
	printf("%++++++++########d\n", -42);
	printf("%########++++++++d\n", 42);
	printf("%########++++++++d\n", 0);
	printf("%########++++++++d\n", -42);
	printf("%++++++++00000000d\n", 42);
	printf("%++++++++00000000d\n", 0);
	printf("%++++++++00000000d\n", -42);
	printf("%00000000++++++++d\n", 42);
	printf("%00000000++++++++d\n", 0);
	printf("%00000000++++++++d\n", -42);
	printf("%++++++++        d\n", 42);
	printf("%++++++++        d\n", 0);
	printf("%++++++++        d\n", -42);
	printf("%        ++++++++d\n", 42);
	printf("%        ++++++++d\n", 0);
	printf("%        ++++++++d\n", -42);
	printf("%--------00000000d\n", 42);
	printf("%--------00000000d\n", 0);
	printf("%--------00000000d\n", -42);
	printf("%00000000--------d\n", 42);
	printf("%00000000--------d\n", 0);
	printf("%00000000--------d\n", -42);
	printf("%--------        d\n", 42);
	printf("%--------        d\n", 0);
	printf("%--------        d\n", -42);
	printf("%        --------d\n", 42);
	printf("%        --------d\n", 0);
	printf("%        --------d\n", -42);
	printf("%        00000000d\n", 42);
	printf("%        00000000d\n", 0);
	printf("%        00000000d\n", -42);
	printf("%00000000        d\n", 42);
	printf("%00000000        d\n", 0);
	printf("%00000000        d\n", -42);
	printf("%-+#0 d\n", 42);
	printf("%-+#0 d\n", 0);
	printf("%-+#0 d\n", -42);
	printf("%-+# 0d\n", 42);
	printf("%-+# 0d\n", 0);
	printf("%-+# 0d\n", -42);
	printf("%-+0 #d\n", 42);
	printf("%-+0 #d\n", 0);
	printf("%-+0 #d\n", -42);
	printf("%-+0# d\n", 42);
	printf("%-+0# d\n", 0);
	printf("%-+0# d\n", -42);
	printf("%+-#0 d\n", 42);
	printf("%+-#0 d\n", 0);
	printf("%+-#0 d\n", -42);
	printf("%+- #0d\n", 42);
	printf("%+- #0d\n", 0);
	printf("%+- #0d\n", -42);
	printf("%+- 0#d\n", 42);
	printf("%+- 0#d\n", 0);
	printf("%+- 0#d\n", -42);
	printf("%+ -#0d\n", 42);
	printf("%+ -#0d\n", 0);
	printf("%+ -#0d\n", -42);
	printf("%+ -0#d\n", 42);
	printf("%+ -0#d\n", 0);
	printf("%+ -0#d\n", -42);
	printf("% +-#0d\n", 42);
	printf("% +-#0d\n", 0);
	printf("% +-#0d\n", -42);
	printf("% +-0#d\n", 42);
	printf("% +-0#d\n", 0);
	printf("% +-0#d\n", -42);
	printf("% -+#0d\n", 42);
	printf("% -+#0d\n", 0);
	printf("% -+#0d\n", -42);
	printf("% -+0#d\n", 42);
	printf("% -+0#d\n", 0);
	printf("% -+0#d\n", -42);
	printf("%- +#0d\n", 42);
	printf("%- +#0d\n", 0);
	printf("%- +#0d\n", -42);
	printf("%- +0#d\n", 42);
	printf("%- +0#d\n", 0);
	printf("%- +0#d\n", -42);
	printf("%- #+0d\n", 42);
	printf("%- #+0d\n", 0);
	printf("%- #+0d\n", -42);
	printf("%- 0+#d\n", 42);
	printf("%- 0+#d\n", 0);
	printf("%- 0+#d\n", -42);
	printf("%- #0+d\n", 42);
	printf("%- #0+d\n", 0);
	printf("%- #0+d\n", -42);
	printf("%- 0#+d\n", 42);
	printf("%- 0#+d\n", 0);
	printf("%- 0#+d\n", -42);
	printf("% -+#0d\n", 42);
	printf("% -+#0d\n", 0);
	printf("% -+#0d\n", -42);
	printf("% -+0#d\n", 42);
	printf("% -+0#d\n", 0);
	printf("% -+0#d\n", -42);
	printf("% -#+0d\n", 42);
	printf("% -#+0d\n", 0);
	printf("% -#+0d\n", -42);
	printf("% -0+#d\n", 42);
	printf("% -0+#d\n", 0);
	printf("% -0+#d\n", -42);
	printf("% -#0+d\n", 42);
	printf("% -#0+d\n", 0);
	printf("% -#0+d\n", -42);
	printf("% -0#+d\n", 42);
	printf("% -0#+d\n", 0);
	printf("% -0#+d\n", -42);
	printf("% +#-0d\n", 42);
	printf("% +#-0d\n", 0);
	printf("% +#-0d\n", -42);
	printf("% +0-#d\n", 42);
	printf("% +0-#d\n", 0);
	printf("% +0-#d\n", -42);
	printf("% -#+0d\n", 42);
	printf("% -#+0d\n", 0);
	printf("% -#+0d\n", -42);
	printf("% -0+#d\n", 42);
	printf("% -0+#d\n", 0);
	printf("% -0+#d\n", -42);
	printf("% -#0+d\n", 42);
	printf("% -#0+d\n", 0);
	printf("% -#0+d\n", -42);
	printf("% -0#+d\n", 42);
	printf("% -0#+d\n", 0);
	printf("% -0#+d\n", -42);

// ---------- LMC & precision ---------

	printf("%3d", 42);
	printf("%3d", 0);
	printf("%3d", -42);
	printf("%.7d", 42);
	printf("%.7d", 0);
	printf("%.7d", -42);
	printf("%3.7d", 42);
	printf("%3.7d", 0);
	printf("%3.7d", -42);

// --------- sizes ----------

	printf("%hd\n", (short)42);
	printf("%hd\n", (short)0);
	printf("%hd\n", (short)-42);
	printf("%hhd\n", (char)42);
	printf("%hhd\n", (char)0);
	printf("%hhd\n", (char)-42);
	printf("%ld\n", (long)42);
	printf("%ld\n", (long)0);
	printf("%ld\n", (long)-42);
	printf("%lld\n", (long long)42);
	printf("%lld\n", (long long)0);
	printf("%lld\n", (long long)-42);

// ---------- repetitive conversions --------

	printf("%d%d%d\n", 42, 0, -42);
	printf("%d    %d           %d\n", 42, 0, -42);
	printf("%#d% d%0d\n", 42, 0, -42);
	printf("%d\n", printf("%ld%hd%d\n", (long)42, (short)0, -42));
	printf("%d% d%0d\n", 42, 0, -42);
	printf("%d% d%0d\n", 42, 0, -42);
	printf("%d% d%0d\n", 42, 0, -42);
	printf("%d% d%0d\n", 42, 0, -42);
	printf("%d% d%0d\n", 42, 0, -42);
	printf("%d% d%0d\n", 42, 0, -42);
	printf("%d% d%0d\n", 42, 0, -42);
	printf("%d% d%0d\n", 42, 0, -42);
	printf("%d% d%0d\n", 42, 0, -42);
	printf("%d% d%0d\n", 42, 0, -42);
	printf("%d% d%0d\n", 42, 0, -42);
	printf("%d% d%0d\n", 42, 0, -42);
	printf("%d% d%0d\n", 42, 0, -42);

// ----------- invalid printf ---------

	printf("%d\n", printf("aha!\n", 42));
	printf("%d\n", printf("%d\n"));
	printf("%d\n", printf("%#d\n", 42));
	printf("%d\n", printf("%h\n"));
	printf("%d\n", printf("%yd\n", 42));
	printf("%d\n", printf("%ll3.5\n", 42));
	printf("%d\n", printf("%ld%hd%d\n", (short)42, (long)0, -42));
	printf("%d\n", printf("%ld%hd%d\n", (short)42, 0, (long)-42));
	numeric_tests();
	chars_tests();
	mixed_tests();
	bonus_tests();
	return (0);
}
