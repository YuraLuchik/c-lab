#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


int getNegativeCount(int *array, int n) {
    int counter = 0;

    for (int i = 0; i < n; ++i) {
        if (array[i]<0){
            counter++;
        }
    }
    return counter;
}

int minimalAbsElement(int *array, int n){
    int min = 100;

    for (int i = 0; i < n; ++i) {
        if (abs(min) > abs(array[i])){
            min = array[i];
        }
    }

    return min;
}

int sum(int * array, int n){
    int sum = 0, min = minimalAbsElement(array, n);

    for (int i = 0; i < n; ++i) {
        if(array[i] == min){
            for (int j = 0; j < n; ++j) {
                sum += array[j];
            }
            return sum;
        }
    }
    return sum;
}

int main() {
    int n = 40;
    int *array = (int *) calloc(n, sizeof(int));

    srand(time(NULL));

    for (int i = 0; i < n; ++i) {
        array[i] = -100 + rand() % (100 + 100 + 1);
    }

    printf("\nThe sum of the elements of the array, located after the minimum modulo element.  - %d", sum(array, n));
    printf("\nThe number of negative elements of the array.  - %d", getNegativeCount(array, n));
    return 0;
}
