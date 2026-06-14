#include <stdio.h>
#include "mathlib.h"

/* Helper function for PASS */
void test_pass(FILE *report, const char *test_name, int *passed)
{
    printf("PASS: %s\n", test_name);
    fprintf(report, "PASS: %s\n", test_name);
    (*passed)++;
}

/* Helper function for FAIL */
void test_fail(FILE *report, const char *test_name, int *failed)
{
    printf("FAIL: %s\n", test_name);
    fprintf(report, "FAIL: %s\n", test_name);
    (*failed)++;
}

int main(void)
{
    int passed = 0;
    int failed = 0;

    FILE *report = fopen("reports/test_report.txt", "w");

    if (report == NULL)
    {
        printf("Could not create report file.\n");
        return 1;
    }

    fprintf(report, "========== UNIT TEST REPORT ==========\n\n");

    /* add() tests */
    if (add(2, 3) == 5)
        test_pass(report, "add(2,3)", &passed);
    else
        test_fail(report, "add(2,3)", &failed);

    if (add(0, 0) == 0)
        test_pass(report, "add(0,0)", &passed);
    else
        test_fail(report, "add(0,0)", &failed);

    if (add(-2, 2) == 0)
        test_pass(report, "add(-2,2)", &passed);
    else
        test_fail(report, "add(-2,2)", &failed);

    /* subtract() tests */
    if (subtract(10, 4) == 6)
        test_pass(report, "subtract(10,4)", &passed);
    else
        test_fail(report, "subtract(10,4)", &failed);

    if (subtract(5, 5) == 0)
        test_pass(report, "subtract(5,5)", &passed);
    else
        test_fail(report, "subtract(5,5)", &failed);

    if (subtract(-5, -2) == -3)
        test_pass(report, "subtract(-5,-2)", &passed);
    else
        test_fail(report, "subtract(-5,-2)", &failed);

    /* multiply() tests */
    if (multiply(3, 4) == 12)
        test_pass(report, "multiply(3,4)", &passed);
    else
        test_fail(report, "multiply(3,4)", &failed);

    if (multiply(5, 0) == 0)
        test_pass(report, "multiply(5,0)", &passed);
    else
        test_fail(report, "multiply(5,0)", &failed);

    if (multiply(-3, 4) == -12)
        test_pass(report, "multiply(-3,4)", &passed);
    else
        test_fail(report, "multiply(-3,4)", &failed);

    if (multiply(-3, -4) == 12)
        test_pass(report, "multiply(-3,-4)", &passed);
    else
        test_fail(report, "multiply(-3,-4)", &failed);

    /* divide() tests */
    if (divide(10, 2) == 5.0f)
        test_pass(report, "divide(10,2)", &passed);
    else
        test_fail(report, "divide(10,2)", &failed);

    if (divide(10, 0) == 0.0f)
        test_pass(report, "divide(10,0)", &passed);
    else
        test_fail(report, "divide(10,0)", &failed);

    if (divide(7, 2) == 3.5f)
        test_pass(report, "divide(7,2)", &passed);
    else
        test_fail(report, "divide(7,2)", &failed);

    if (divide(-8, 2) == -4.0f)
        test_pass(report, "divide(-8,2)", &passed);
    else
        test_fail(report, "divide(-8,2)", &failed);

    if (divide(0, 5) == 0.0f)
        test_pass(report, "divide(0,5)", &passed);
    else
        test_fail(report, "divide(0,5)", &failed);

    /* max() test */
    if (max(10, 5) == 10)
        test_pass(report, "max(10,5)", &passed);
    else
        test_fail(report, "max(10,5)", &failed);

    /* min() test */
    if (min(10, 5) == 5)
        test_pass(report, "min(10,5)", &passed);
    else
        test_fail(report, "min(10,5)", &failed);

    printf("\n=====================================\n");
    printf("Tests Passed : %d\n", passed);
    printf("Tests Failed : %d\n", failed);

    fprintf(report, "\n=====================================\n");
    fprintf(report, "Tests Passed : %d\n", passed);
    fprintf(report, "Tests Failed : %d\n", failed);

    if (failed == 0)
    {
        printf("RESULT : ALL TESTS PASSED\n");
        fprintf(report, "RESULT : ALL TESTS PASSED\n");
    }
    else
    {
        printf("RESULT : SOME TESTS FAILED\n");
        fprintf(report, "RESULT : SOME TESTS FAILED\n");
    }

    fclose(report);

    return failed;
}