#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k, len;

    printf("Enter a string: ");
    scanf("%s", str); // Read string without spaces

    len = strlen(str);

    for (i = 0; i < len; i++) {       // Starting index
        for (j = i; j < len; j++) {   // Ending index
            for (k = i; k <= j; k++) {
                printf("%c", str[k]); // Print characters from i to j
            }
            printf(","); // Separate substrings
        }
    }

    printf("\n");
    return 0;
}
