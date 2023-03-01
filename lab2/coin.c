#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //Q1
    int i, j, flip, num_flips[6] = {10, 100, 1000, 10000, 100000, 1000000};
    FILE *fp = fopen("coin_flips.csv", "w");
    fprintf(fp, "Number of Flips,Heads,Tails\n");
    srand(time(NULL));  // Seed the random number generator with the current time
    for (i = 0; i < 6; i++) {
        int freq[2] = {0};  // Initialize array of frequencies to zero
        for (j = 0; j < num_flips[i]; j++) {
            flip = rand() % 2;  // Generate a random number 0 or 1 to represent heads or tails
            freq[flip]++;  // Increment the frequency count for the corresponding result
        }
        fprintf(fp, "%d,%d,%d\n", num_flips[i], freq[0], freq[1]);
        printf("Number of flips: %d, Heads: %d, Tails: %d\n", num_flips[i], freq[0], freq[1]);
    }
    fclose(fp);


    //Q2
    double prob_heads = 0.8;
    FILE *fptr = fopen("unfair_coin_flips.csv", "w");
    fprintf(fptr, "Number of Flips,Heads,Tails\n");
    for (i = 0; i < 6; i++) {
        int freq[2] = {0};  // Initialize array of frequencies to zero
        for (j = 0; j < num_flips[i]; j++) {
            flip = rand() % 100;  // Generate a random number between 0 and 99
            if (flip < prob_heads * 100) {
                freq[0]++;  // Increment the frequency count for heads
            } else {
                freq[1]++;  // Increment the frequency count for tails
            }
        }
        fprintf(fptr, "%d,%d,%d\n", num_flips[i], freq[0], freq[1]);
        printf("Number of flips: %d, Heads: %d, Tails: %d\n", num_flips[i], freq[0], freq[1]);
    }
    fclose(fptr);

    return 0;
}
