#include <stdio.h>

int ArithmeticProgression(int a1,int d, int n) {
    if (n <= 0) { return a1-d; }
    else{return (ArithmeticProgression(a1+d,d,n-1));}
}
int main() {
    int a1,d,n,value;
    printf("Enter the first term of the arithmetic progression:\t");
    scanf_s("%d", &a1);
    printf("Enter the difference of the arithmetic progression:\t");
    scanf_s("%d", &d);
    printf("Enter the n term of the arithmetic progression:\t");
    scanf_s("%d", &n);
    value = ArithmeticProgression(a1,d,n);
    int sum = ((a1+value)*n)/2;
    printf("\nThe sum of the first %d members of the progression - %d",d,sum);
    return 0;
}