#include <stdio.h>

#define ROWS 3
#define COLS 20

void replaceVowels(char arr[ROWS][COLS]);
void displayArray(char arr[ROWS][COLS]);

int main() {
    char arr[ROWS][COLS];

    printf("Enter %d strings:\n", ROWS);
    for (int i = 0; i < ROWS; i++) {
        fgets(arr[i], COLS, stdin);
    }

    replaceVowels(arr);

    printf("\nUpdated Array:\n");
    displayArray(arr);

    return 0;
}

void replaceVowels(char arr[ROWS][COLS]) {
    char c;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; arr[i][j] != '\0'; j++) {
            c = arr[i][j];

            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
                c=='A' || c=='E' || c=='I' || c=='O' || c=='U') {

                arr[i][j] = '*';
            }
        }
    }
}

void displayArray(char arr[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        printf("%s", arr[i]);
    }
}
