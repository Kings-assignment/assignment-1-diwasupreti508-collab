// Write an expression that checks if a number is both positive and even.

#include <stdio.h>
int main()
{
    int n=10;
    if (n>0 && (n & 1) == 0){
        printf("%d is both positive and even\n", n);

    }
    
    return 0;


}