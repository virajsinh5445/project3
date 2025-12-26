#include <stdio.h>

int main() {
    int num, count = 0;
    int first, last;
    char ch = 'a';

    /* -------- Count number of digits -------- */
    printf("Enter any number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    do {
        count++;
        num = num / 10;
    } while (num != 0);

    printf("Total number of digits: %d\n", count);

    /* -------- Print characters with gap of 4 -------- */
    printf("Characters with gap of 4:\n");
    do {
        printf("%c ", ch);
        ch = ch + 4;
    } while (ch <= 'z');
    printf("\n");

    /* -------- Sum of first and last digit -------- */
    printf("Enter any number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    last = num % 10;

    while (num >= 10) {
        num = num / 10;
    }

    first = num;

    printf("Sum of first and last digit: %d\n", first + last);

    return 0;
}