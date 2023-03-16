#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    // Check if there are exactly 2 arguments
    if (argc != 3) {
        fprintf(stderr, "Error\n");
        exit(98);
    }

    // Check if the arguments are composed of digits only
    for (int i = 1; i < argc; i++) {
        for (int j = 0; j < strlen(argv[i]); j++) {
            if (!isdigit(argv[i][j])) {
                fprintf(stderr, "Error\n");
                exit(98);
            }
        }
    }

    // Convert the arguments to integers
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    // Multiply the numbers
    int result = num1 * num2;

    // Print the result
    printf("%d\n", result);

    return 0;
}
