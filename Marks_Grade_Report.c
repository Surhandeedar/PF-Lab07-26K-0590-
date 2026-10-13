#include <stdio.h>
int main() {
	
    int size = 10;
    float marks[10];
    int i;
    for (i = 0; i < size; i++) {
        do {
            printf("Enter marks for student %d: ", i + 1);
            scanf("%f", &marks[i]);
            if (marks[i] < 0 || marks[i] > 20) {
                printf("Invalid marks. Please enter a value between 0 and 20.\n");
            }
        } while (marks[i] < 0 || marks[i] > 20);
    }

    printf("\n--- Initial Grade Report ---\n");
    float sum = 0;
    for (i = 0; i < size; i++) {
        sum += marks[i];
        printf("Student %d: %.2f - ", i + 1, marks[i]);
        if (marks[i] >= 18) {
            printf("Excellent\n");
        } else if (marks[i] >= 14) {
            printf("Good\n");
        } else if (marks[i] >= 10) {
            printf("Average\n");
        } else {
            printf("Needs Improvement\n");
        }
    }

    float average = sum / size;
    printf("\nClass Average: %.2f\n", average);

    int above_average_count = 0;
    for (i = 0; i < size; i++) {
        if (marks[i] > average) {
            above_average_count++;
        }
    }
    printf("Students scoring above average: %d\n", above_average_count);

    for (i = 0; i < size; i++) {
        marks[i] += 1.5;
        if (marks[i] > 20) {
            marks[i] = 20;
        }
    }

    printf("\n--- Revised Grade Report (With 1.5 Bonus) ---\n");
    sum = 0;
    for (i = 0; i < size; i++) {
        sum += marks[i];
        printf("Student %d: %.2f - ", i + 1, marks[i]);
        if (marks[i] >= 18) {
            printf("Excellent\n");
        } else if (marks[i] >= 14) {
            printf("Good\n");
        } else if (marks[i] >= 10) {
            printf("Average\n");
        } else {
            printf("Needs Improvement\n");
        }
    }

    float revised_average = sum / size;
    printf("\nRevised Class Average: %.2f\n", revised_average);

    return 0;
}
