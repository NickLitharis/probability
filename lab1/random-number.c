#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // Q1
    srand(time(NULL));  // Seed the random number generator with the current time
    int random_number = rand();  // Generate a random number
    printf("Random number: %d\n", random_number);

    //Q2
    int i=0;
    for (i = 0; i < 10; i++) {
        random_number = rand();  // Generate a random number
        printf("Random number %d: %d\n", i+1, random_number);
    }

    //Q3
    printf("Maximum random number value: %d\n", RAND_MAX);


    //Q4
    int roll=0, freq[6] = {0};  // Initialize array of frequencies to zero
    for (i = 0; i < 10; i++) {
        roll = rand() % 6 + 1;  // Generate a random number between 1 and 6
        freq[roll-1]++;  // Increment the frequency count for the corresponding result
        printf("Roll %d: %d\n", i+1, roll);
    }
    printf("Frequency of occurrence:\n");
    for (i = 0; i < 6; i++) {
        printf("%d: %d\n", i+1, freq[i]);
    }

    //Q5 
    int j=0, rolls=0, num_rolls[6] = {10, 100, 1000, 10000, 100000, 1000000};
    FILE *fp = fopen("die_rolls.csv", "w");
    fprintf(fp, "Number of Rolls,1,2,3,4,5,6\n");
    for (i = 0; i < 6; i++) {
        int freq[6] = {0};  // Initialize array of frequencies to zero
        for (j = 0; j < num_rolls[i]; j++) {
            rolls = rand() % 6 + 1;  // Generate a random number between 1 and 6
            freq[rolls-1]++;  // Increment the frequency count for the corresponding result
        }
        fprintf(fp, "%d,%d,%d,%d,%d,%d,%d\n", num_rolls[i], freq[0], freq[1], freq[2], freq[3], freq[4], freq[5]);
    }
    fclose(fp);
    return 0;
}
