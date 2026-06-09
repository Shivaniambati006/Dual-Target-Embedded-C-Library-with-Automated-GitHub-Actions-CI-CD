#include <stdio.h>
#include "mathlib.h"
#include "platform.h"

int main()
{
    printf("Add: %d\n", add(10, 5));
    printf("Subtract: %d\n", subtract(10, 5));
    printf("Max: %d\n", max(10, 5));
    printf("Min: %d\n", min(10, 5));
    printf("Multiply: %d\n", multiply(10, 5));
    printf("Divide: %.2f\n", divide(10,5));

    platform_init();
    platform_delay_ms(100);

    return 0;
}