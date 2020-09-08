#include <math.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int mean(int array[], int n){
    int meanValue = 0, counter = 0;

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0 && i != 0){
            meanValue += array[i];
            counter++;
        }
    }
    return meanValue/counter;
}
int main(){
    int max = 100, min = -100, n = 100;
    srand(time(NULL));
    int array[100];
    for (int i = 0; i < n; i++) {
        array[i] = min + rand() % (max - min + 1);
        printf("%d ", array[i]);
    }
    printf("\nArithmetic mean of the array, where the index is a multiple of two - %d", mean(array, n));
    return 0;
}
