#include "main.h"

/**
 * print_number - prints an integer
 * @n:.input integer
 */

#include <stdio.h>

int _putchar(char c);

void print_digit(int n) {
    _putchar(n + '0');
}

void print_number(int n) {
    if (n < 0) {
        _putchar('-');
        n = -n;
    }
    
    if (n < 10) {
        print_digit(n);
    } else {
        print_number(n / 10);
        print_digit(n % 10);
    }
}

int main() {
    int number = 123456;
    print_number(number);
    _putchar('\n');
    
    return 0;
}

int _putchar(char c) {
    return putchar(c);
}

