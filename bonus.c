#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int ft_ret, std_ret;

    ft_ret = ft_printf("ft : |%-10s|\n", "left");
    std_ret = printf("std: |%-10s|\n", "left");
    printf("ret -> ft: %d | std: %d\n\n", ft_ret, std_ret);

    ft_ret = ft_printf("ft : |%010d|\n", 42);
    std_ret = printf("std: |%010d|\n", 42);
    printf("ret -> ft: %d | std: %d\n\n", ft_ret, std_ret);

    ft_ret = ft_printf("ft : |%.5d|\n", 42);
    std_ret = printf("std: |%.5d|\n", 42);
    printf("ret -> ft: %d | std: %d\n\n", ft_ret, std_ret);

    ft_ret = ft_printf("ft : |%#x|\n", 255);
    std_ret = printf("std: |%#x|\n", 255);
    printf("ret -> ft: %d | std: %d\n\n", ft_ret, std_ret);

    ft_ret = ft_printf("ft : |%#X|\n", 255);
    std_ret = printf("std: |%#X|\n", 255);
    printf("ret -> ft: %d | std: %d\n\n", ft_ret, std_ret);

    ft_ret = ft_printf("ft : |%+d|\n", 42);
    std_ret = printf("std: |%+d|\n", 42);
    printf("ret -> ft: %d | std: %d\n\n", ft_ret, std_ret);

    ft_ret = ft_printf("ft : |% d|\n", 42);
    std_ret = printf("std: |% d|\n", 42);
    printf("ret -> ft: %d | std: %d\n\n", ft_ret, std_ret);

    ft_ret = ft_printf("ft : |%8.4d|\n", 42);
    std_ret = printf("std: |%8.4d|\n", 42);
    printf("ret -> ft: %d | std: %d\n\n", ft_ret, std_ret);

    ft_ret = ft_printf("ft : |%-8.4d|\n", 42);
    std_ret = printf("std: |%-8.4d|\n", 42);
    printf("ret -> ft: %d | std: %d\n", ft_ret, std_ret);
}
