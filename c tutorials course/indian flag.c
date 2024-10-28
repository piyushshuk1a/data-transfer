#include <stdio.h>

int main() {
    int rows = 15; // Total number of rows in the flag

    // Print the top part of the flag
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < rows; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Print the middle part of the flag
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows / 3; j++) {
            printf("*");
        }
        for (int j = 0; j < rows / 3; j++) {
            printf(" ");
        }
        for (int j = 0; j < rows / 3; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Print the bottom part of the flag
    for (int i = 0; i < rows; i++) {
        printf("*");
    }
    printf("\n");

    return 0;
}