#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
// #define N 10000000

int main(){


    
    // // q1
    // printf("Random Integer:%d\n\n",rand());

    // //q2
    // for (int i=0;i<10;i++){
    //     printf("Random integer number %d: %d\n", i+1, rand() );
    // }

    // //q3
    // printf("\nMaximun Random Number: %d\n",RAND_MAX);


    // //q4
    srand(time(NULL));
    // for (int i=0;i<10;i++){
    //     printf("Random integer number %d: %d\n", i+1, rand() );
    // }
    


    //q5

    FILE *fptr;
    fptr=fopen("results10000000.csv","w");
    
    int array[7]={0};

    for (int i=0;i<N;i++){
        int x=rand()%6 +1;
        // printf("%i\n",x);
        array[x]++;
    }

    for (int i=1;i<7;i++){
        fprintf(fptr,"%i\n",array[i]);
    }
    // return 0;
}