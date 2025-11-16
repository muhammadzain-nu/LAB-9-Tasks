#include <stdio.h>
#include <stdio.h>

#define STUDENTS 4
#define CLASSES 5

vaoid inputAttendance(int arr[STUDENTS][CLASSES]);
void calculatePercentage(int arr[STUDENTS][CLASSES]);

int main() {
    int attendance[STUDENTS][CLASSES];

    inputAttendance(attendance);
    calculatePercentage(attendance);

    return 0;
}

void inputAttendance(int arr[STUDENTS][CLASSES]) {
    printf("Enter attendance (1 = Present, 0 = Absent):\n");

    for (int i = 0; i < STUDENTS; i++) {
        printf("\nStudent %d:\n", i + 1);
        for (int j = 0; j < CLASSES; j++) {
            printf("  Class %d: ", j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
}


void calculatePercentage(int arr[STUDENTS][CLASSES]) {
    printf("\n=== Attendance Report ===\n");

    for (int i = 0; i < STUDENTS; i++) {
        int present = 0;

        for (int j = 0; j < CLASSES; j++) {
            if (arr[i][j] == 1)
                present++;
        }

        float percentage = (present * 100.0) / CLASSES;

        printf("\nStudent %d: %.2f%% attendance", i + 1, percentage);

        if (percentage < 75.0)
            printf("  --> WARNING: Low Attendance!");
    }
}
