#include <math.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int minimalAbsElementOfTheArray(int array[], int n) {
    int min = 100;
    for (int i = 0; i < n; ++i) {
        if (abs(min) > abs(array[i])) {
            min = array[i];
        }
    }
    return min;
}

double arrayZero(int array[], int n){
    double counter = 1;
    for (int i = 0; i < n; ++i) {
        if (array[i] == 0){
            for (int j = i+1; j < n && array[j] != 0; ++j) {
                counter *= array[j];
            }
            return counter;
        }
        if (i+1 == n){
            printf("\nNero not found.");
            exit(1);
        }
    }
    return counter;
}

int main(){
    int max = 100, min = -100, n = 100;
    srand(time(NULL));
    int array[100];
    for (int i = 0; i < n; i++) {
        array[i] = min + rand() % (max - min + 1);
        printf("%d ", array[i]);
    }
    printf("\nMinimal abs element - %d", minimalAbsElementOfTheArray(array, n));
    printf("\nThe product of numbers between two zeros - %f", arrayZero(array, n));
    return 0;
}
