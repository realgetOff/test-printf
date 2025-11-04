#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int ft_ret, std_ret;

    ft_ret = ft_printf("ft : Char: %c\n", 'A');
    std_ret = printf("std: Char: %c\n", 'A');
    printf("ret -> ft: %d | std: %d\n\n", ft_ret, std_ret);

    ft_ret = ft_printf("ft : String: %s\n", "Hello 42");
    std_ret = printf("std: String: %s\n", "Hello 42");
    printf("ret -> ft: %d | std: %d\n\n", ft_ret, std_ret);

    ft_ret = ft_printf("ft : Pointer: %p\n", (void *)0x1234abcd);
    std_ret = printf("std: Pointer: %p\n", (void *)0x1234abcd);
    printf("ret -> ft: %d | std: %d\n\n", ft_ret, std_ret);

    ft_ret = ft_printf("ft : Decimal: %d | Int: %i\n", -42, 42);
    std_ret = printf("std: Decimal: %d | Int: %i\n", -42, 42);
    printf("ret -> ft: %d | std: %d\n\n", ft_ret, std_ret);

    ft_ret = ft_printf("ft : Unsigned: %u\n", 3000000000U);
    std_ret = printf("std: Unsigned: %u\n", 3000000000U);
    printf("ret -> ft: %d | std: %d\n\n", ft_ret, std_ret);

    ft_ret = ft_printf("ft : Hex lower: %x | Hex upper: %X\n", 0xabc123, 0xABC123);
    std_ret = printf("std: Hex lower: %x | Hex upper: %X\n", 0xabc123, 0xABC123);
    printf("ret -> ft: %d | std: %d\n\n", ft_ret, std_ret);

    ft_ret = ft_printf("ft : Percent: %%\n");
    std_ret = printf("std: Percent: %%\n");
    printf("ret -> ft: %d | std: %d\n\n", ft_ret, std_ret);

    ft_ret = ft_printf("ft : NULL string: %s\n", (char *)NULL);
    std_ret = printf("std: NULL string: %s\n", (char *)NULL);
    printf("ret -> ft: %d | std: %d\n\n", ft_ret, std_ret);

    ft_ret = ft_printf("ft : Zero: %d | Min: %d | Max: %d\n", 0, -2147483648, 2147483647);
    std_ret = printf("std: Zero: %d | Min: %d | Max: %d\n", 0, -2147483648, 2147483647);
    printf("ret -> ft: %d | std: %d\n", ft_ret, std_ret);
}
