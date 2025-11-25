#include <stdio.h>
#include <string.h>

int main() {
    char date[20], day[3], month[3], year[5];

    printf("Enter date (dd/04/yyyy): ");
    scanf("%s", date);

    // Extract day, month, year
    strncpy(day, date, 2);
    day[2] = '\0';

    strncpy(month, date+3, 2);
    month[2] = '\0';

    strcpy(year, date+6);

    // Check if month is 04 and print Apr
    if (strcmp(month, "04") == 0) {
        printf("%s-Apr-%s\n", day, year);
    } else {
        printf("Month not 04\n");
    }

    return 0;
}
