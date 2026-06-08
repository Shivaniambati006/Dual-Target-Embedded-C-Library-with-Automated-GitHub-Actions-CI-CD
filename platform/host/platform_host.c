#include <stdio.h>
#include "platform.h"

void platform_init(void)
{
    printf("Host platform initialized\n");
}

void platform_delay_ms(int ms)
{
    printf("Host delay: %d ms\n", ms);
}