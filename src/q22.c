// Write a C expression that calculates the square root of the sum of two numbers, rounded to the nearest integer.
// You can you math header file for this (eg: #include <math.h>)

#include <stdio.h>
#include <math.h>
int main() {
    double a, b;
    printf("Enter the value of a:");
    scanf("%lf", &a);
    printf("Enter the value of b:");
    scanf("%lf", &b);
    double sum = a + b;
    double result = sqrt(sum);
    int rounded_result = (int)(result + 0.5); // Round to the
    printf("The square root of the sum of a and b, rounded to the nearest integer, is: %d\n", rounded_result);
    return 0;
}