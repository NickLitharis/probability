#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// #define N 10

int main(){
    srand(time(NULL));
    int random_table[2]={0};

    int i=0;
    for(i=0;i<N;i++){
        int x=rand()%2;
        random_table[x]++;
    }
    
    printf("Κορώνα:%d\n",random_table[0]);
    printf("Γράμματα:%d\n",random_table[1]);
    // for(i=0;i<table_size;i++){
        // printf("%d\n",random_table[i]);
    // }

}