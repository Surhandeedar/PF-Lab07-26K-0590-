#include <stdio.h>
int main() {
	
    int temps[] = {31, 33, 35, 34, 38, 36, 32};
    int length = sizeof(temps) / sizeof(temps[0]);

    printf("Initial Readings:\n");
    int i;
    for (i = 0; i < length; i++) {
        printf("Day %d: %d C\n", i + 1, temps[i]);
    }

    int highest = temps[0];
    int lowest = temps[0];
    int sum = 0;

    for (i = 0; i < length; i++) {
        if (temps[i] > highest) {
            highest = temps[i];
        }
        if (temps[i] < lowest) {
            lowest = temps[i];
        }
        sum += temps[i];
    }

    double average = (double)sum / length;

    printf("Highest Temperature: %d C\n", highest);
    printf("Lowest Temperature: %d C\n", lowest);
    printf("Average Temperature: %.2f C\n\n", average);

    temps[2] = 37;

    printf("Updated Readings (After Sensor Correction):\n");
    for (i = 0; i < length; i++) {
        printf("Day %d: %d C\n", i + 1, temps[i]);
    }

    highest = temps[0];
    lowest = temps[0];
    sum = 0;

    for (i = 0; i < length; i++) {
        if (temps[i] > highest) {
            highest = temps[i];
        }
        if (temps[i] < lowest) {
            lowest = temps[i];
        }
        sum += temps[i];
    }

    average = (double)sum / length;

    printf("Updated Highest Temperature: %d C\n", highest);
    printf("Updated Lowest Temperature: %d C\n", lowest);
    printf("Updated Average Temperature: %.2f C\n\n", average);

    printf("Memory Addresses:\n");
    for (i = 0; i < length; i++) {
        printf("Address of element %d (&temps[%d]): %p\n", i, i, (void*)&temps[i]);
    }

    return 0;
}
