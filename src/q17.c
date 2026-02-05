// Create an expression that checks if a given character is an uppercase letter.

#include <stdio.h>
int main() {
    int result;
    char character;


    printf("Enter the character: ", &character);
    scanf("%c", &character);

    result = (character >= 'A') && (character <= 'Z');

    printf("The result is %d\n", result);

    return 0;

}