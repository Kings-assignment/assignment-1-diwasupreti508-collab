// Write a C program to swap the values of two variables using a temporary variable.

#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("value of a after swap is %d and b is %d\n", a, b);

    return 0;
}