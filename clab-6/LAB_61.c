#include <math.h>
#include <stdio.h>


double f(double x, double y){
    return (pow(x,2)+x*y-pow(y,2))/(1+pow(x,2)+pow(y,2));
}

int main(){
    double a = 2, b = 3;
    printf("f(%0.1f, %0.1f) = %0.1f\n", 1.7, a, f(1.7, a));
    printf("f(%0.1f, %0.1f) = %0.1f\n", b, a, f(b, a));
    printf("f(%0.1f, %0.1f) = %0.1f\n", (a+b), (b-a), f(a+b, b-a));
    return 0;
}
