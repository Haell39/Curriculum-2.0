#include <stdio.h>

int main() {
    int day, monthNumber;
    const char *months[] = {"January", "February", "March", "April", "May", "June", 
                            "July", "August", "September", "October", "November", "December"};

    printf("Enter the day: ");
    scanf("%d", &day);
    printf("Enter the month number (from 1 to 12): ");
    scanf("%d", &monthNumber);

    // Adjust the month index based on the day
    int monthIndex = monthNumber - 1; // Subtract 1 because array indexes start from 0

    printf("The month corresponding to the day %d and the month number %d is %s.\n", day, monthNumber, months[monthIndex]);

    return 0;
}
