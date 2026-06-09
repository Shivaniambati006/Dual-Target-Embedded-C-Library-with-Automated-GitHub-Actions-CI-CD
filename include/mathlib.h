#ifndef MATHLIB_H
#define MATHLIB_H

/**
 * @brief Adds two integers.
 *
 * @param a First integer.
 * @param b Second integer.
 *
 * @return Sum of a and b.
 */
int add(int a, int b);

/**
 * @brief Subtracts the second integer from the first.
 *
 * @param a First integer.
 * @param b Second integer.
 *
 * @return Difference of a and b.
 */
int subtract(int a, int b);

/**
 * @brief Multiplies two integers.
 *
 * @param a First integer.
 * @param b Second integer.
 *
 * @return Product of a and b.
 */
int multiply(int a, int b);

/**
 * @brief Divides the first integer by the second.
 *
 * Returns 0.0 if the divisor is zero.
 *
 * @param a Dividend.
 * @param b Divisor.
 *
 * @return Quotient of a and b.
 */
float divide(int a, int b);

/**
 * @brief Returns the larger of two integers.
 *
 * @param a First integer.
 * @param b Second integer.
 *
 * @return Maximum value.
 */
int max(int a, int b);

/**
 * @brief Returns the smaller of two integers.
 *
 * @param a First integer.
 * @param b Second integer.
 *
 * @return Minimum value.
 */
int min(int a, int b);

#endif