#include <stdio.h>
#include "mathlib.h"

int main(void)
{
    int sensor1 = 35;
    int sensor2 = 20;

    int total = add(sensor1, sensor2);
    int difference = subtract(sensor1, sensor2);
    int highest = max(sensor1, sensor2);
    int lowest = min(sensor1, sensor2);

    printf("=== Embedded Demo ===\n");
    printf("Sensor1: %d\n", sensor1);
    printf("Sensor2: %d\n", sensor2);
    printf("Total: %d\n", total);
    printf("Difference: %d\n", difference);
    printf("Highest: %d\n", highest);
    printf("Lowest: %d\n", lowest);

    return 0;
}