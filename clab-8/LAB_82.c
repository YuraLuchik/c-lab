#include <stdio.h>

int Factorial(int n) {
    if (n <= 1) return 1;
    return (n * Factorial(n - 1));
}
int Counting(int n, int i) {
    return Factorial(n) / (Factorial(i) * Factorial(n - i));
}

int main() {
    int sum = 0;
    int array[] = {2,3,5,7,11,13};
    for (int i = 0; i < 6; ++i) {
        sum += Counting(array[i], i);
    }
    printf("\n%d - different products, multiples of 10, can be obtained from the numbers 2, 3, 5, 7, 11, 13",sum);
    return 0;
}