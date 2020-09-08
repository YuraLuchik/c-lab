#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


bool IsSimmetric(int **array, int n) {
    for (size_t i = 0; i < n; i++)
        for (size_t j = 0; j < i; j++)
            if (array[i][j] != array[j][i])
                return false;
    return true;
}

int ** initMatrix(n){
    int **array = (int **) calloc(n, sizeof(int));
    for (int j = 0; j < n; ++j) {
        array[j] = (int *) calloc(n, sizeof(int));
    }

    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < n; ++i) {
            array[j][i] = -100 + rand() % (100 + 100 + 1);
        }
    }
    return array;
}

void printMatrix(int ** array, int n){
    for (int i = 0; i < n; ++i) {
        printf("\n");
        for (int j = 0; j < n; ++j) {
            printf("%d\t", array[i][j]);
        }
    }
    return;
}

int main() {
    int n = 5;
    srand(time(NULL));
    int ** array = initMatrix(n);
    printMatrix(array, n);
    if (IsSimmetric(array, n) == true){
        printf("\nMatrix is symmetric");
    } else {
        printf("\nMatrix is not symmetric");
    }
    return 0;
}
