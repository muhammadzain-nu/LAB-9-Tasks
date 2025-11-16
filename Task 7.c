#include <stdio.h>

#define PLAYERS 11

void inputRuns(int runs[]);
void calculateTotalAverage(int runs[], int *total, float *average);
void findHighest(int runs[], int *maxRun, int *index);

int main() {
    int runs[PLAYERS];
    int total, highest, index;
    float average;

    inputRuns(runs);
    calculateTotalAverage(runs, &total, &average);
    findHighest(runs, &highest, &index);

    printf("\n=== Match Summary ===\n");
    printf("Total Runs Scored: %d\n", total);
    printf("Average Score: %.2f\n", average);
    printf("Highest Scorer: Player %d with %d runs\n", index + 1, highest);

    return 0;
}

void inputRuns(int runs[]) {
    printf("Enter runs scored by 11 players:\n");
    for (int i = 0; i < PLAYERS; i++) {
        printf("Player %d: ", i + 1);
        scanf("%d", &runs[i]);
    }
}


void calculateTotalAverage(int runs[], int *total, float *average) {
    *total = 0;

    for (int i = 0; i < PLAYERS; i++) {
        *total += *(runs + i);   
    }

    *average = *total / (float)PLAYERS;
}


void findHighest(int runs[], int *maxRun, int *index) {
    *maxRun = runs[0];
    *index = 0;

    for (int i = 1; i < PLAYERS; i++) {
        if (*(runs + i) > *maxRun) {
            *maxRun = *(runs + i);
            *index = i;
        }
    }
}
