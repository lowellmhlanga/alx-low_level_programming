#include "main.h"

/**
 * _strncat - concatenates specified values from src to dest
 * @src: second string to copy from
 * @dest: string to be overwritten
 * @n: number of values to concatenate
 * Description: appends n number of values from src to end of dest
 * Return: pointer to dest
 **/

#include <stdio.h>

char* _strncat(char* dest, const char* src, int n) {
    char* result = dest;  // Store the initial value of dest

    // Move the pointer to the end of dest
    while (*dest != '\0') {
        dest++;
    }

    // Copy characters from src to dest up to n bytes
    while (n > 0 && *src != '\0') {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    *dest = '\0';  // Add the null-terminating character

    return result;
}
