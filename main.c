/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darbib <darbib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:02:58 by darbib            #+#    #+#             */
/*   Updated: 2019/04/08 18:03:24 by darbib           ###   ########.fr       */
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

// ---------- repetitive conversions --------

	printf("%d%d%d\n", 42, 0, -42);
	printf("%d    %d           %d\n", 42, 0, -42);
	printf("%d% d%d\n", 42, 0, -42);
	printf("%#d% d%0d\n", 42, 0, -42);
	printf("%d% d%0d\n", 42, 0, -42);
	printf("%d% d%0d\n", 42, 0, -42);

// ----------- invalid flags ---------

	printf("%0 d\n", 42);
	printf("%d\n", printf("%0 d\n", 42));
	printf("%+-#0 d\n", 42);
	printf("%d\n", 0);
	printf("%d\n", -42);
	numeric_tests();
	chars_tests();
	mixed_tests();
	bonus_tests();
	return (0);
}
