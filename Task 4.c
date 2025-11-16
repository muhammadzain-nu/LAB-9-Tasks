#include <stdio.h>

#define ROWS 3
#define COLS 4

void searchElement(int *ptr, int rows, int cols, int target);

int main() {
    int arr[ROWS][COLS] = {
        {10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 100, 110, 120}
    };

    int target;
    printf("Enter element to search: ");
    scanf("%d", &target);

    searchElement((int *)arr, ROWS, COLS, target);

    return 0;
}

void searchElement(int *ptr, int rows, int cols, int target) {
    int found = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            if (*(ptr + i * cols + j) == target) {
                printf("Element %d found at Row %d, Column %d\n",target, i, j);
                found = 1;
            }
        }
    }

