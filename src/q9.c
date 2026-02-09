// Input a number representing days and print the equivalent number of weeks and days.
// Example: 
// Input = 10
// Output = "1 week and 3 days"

#include <stdio.h>
int main() {
    int total_days, weeks, days;

    printf("Enter the number of days: ");
    scanf("%d", &total_days);

    weeks = total_days / 7;
    days = total_days % 7;

    printf("%d week(s) and %d day(s)\n", weeks, days);

    return 0;
}