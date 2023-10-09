#include <stdio.h>

// Function to convert a number from 1 to 3999 into Roman numeral
void convertToRoman(int num) {
    int numbers[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    char* symbols[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};

    // Check if the input is within the valid range
    if (num < 1 || num > 999999999) {
        printf("Number out of range (1-999999999)\n");
        return;
    }

    // Iterate through the numbers and symbols in reverse order
    int i = 12; // Start from the largest symbol 'M'
    while (num > 0) {
        // Check if the current symbol can be subtracted from the number
        if (num >= numbers[i]) {
            printf("%s", symbols[i]);
            num -= numbers[i];
        } else {
            i--;
        }
    }
}

int main() {
    int num;

    // Input a number
    printf("Enter a number (1-999999999): ");
    scanf("%d", &num);

    // Convert and print the Roman numeral
    printf("Roman numeral: ");
    convertToRoman(num);
    printf("\n");

    return 0;
}
