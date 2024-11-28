#include <stdio.h>
#include <ctype.h>

int main() {
    char text[3][81]; // 3 lines, each with 80 characters + 1 for null terminator
    int upper[3] = {0}, lower[3] = {0}, digits[3] = {0}, spaces[3] = {0}, others[3] = {0};

    printf("Please enter 3 lines of text (each line up to 80 characters):\n");
    for (int i = 0; i < 3; i++) {
        fgets(text[i], 81, stdin);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; text[i][j] != '\0'; j++) {
            if (isupper(text[i][j])) {
                upper[i]++;
            } else if (islower(text[i][j])) {
                lower[i]++;
            } else if (isdigit(text[i][j])) {
                digits[i]++;
            } else if (isspace(text[i][j])) {
                spaces[i]++;
            } else {
                others[i]++;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        printf("Line %d: %d upper case, %d lower case, %d digits, %d spaces, %d others\n", i + 1, upper[i], lower[i], digits[i], spaces[i], others[i]);
    }

    return 0;
}