#include <stdio.h>
#include "mathlib.h"

int main()
{
    int passed = 0;
    int failed = 0;

    /* Test add() */
    if (add(2, 3) == 5)
    {
        printf("PASS: add(2,3)\n");
        passed++;
    }
    else
    {
        printf("FAIL: add(2,3)\n");
        failed++;
    }

    if (add(0, 0) == 0)
    {
        printf("PASS: add(0,0)\n");
        passed++;
    }
    else
    {
        printf("FAIL: add(0,0)\n");
        failed++;
    }

    if (add(-2, 2) == 0)
    {
        printf("PASS: add(-2,2)\n");
        passed++;
    }
    else
    {
        printf("FAIL: add(-2,2)\n");
        failed++;
    }

    /* Test subtract() */
    if (subtract(10, 4) == 6)
    {
        printf("PASS: subtract(10,4)\n");
        passed++;
    }
    else
    {
        printf("FAIL: subtract(10,4)\n");
        failed++;
    }

    if (subtract(5, 5) == 0)
    {
        printf("PASS: subtract(5,5)\n");
        passed++;
    }
    else
    {
        printf("FAIL: subtract(5,5)\n");
        failed++;
    }

    if (subtract(-5, -2) == -3)
    {
        printf("PASS: subtract(-5,-2)\n");
        passed++;
    }
    else
    {
        printf("FAIL: subtract(-5,-2)\n");
        failed++;
    }

    printf("\nTests Passed: %d\n", passed);
    printf("Tests Failed: %d\n", failed);

    return failed;
}