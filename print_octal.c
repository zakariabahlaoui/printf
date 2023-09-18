#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * peintf_octal - print the number  octal.
 * @numbre: numbre integer
 *
 * return: number octal.
 */

void peintf_octal(int numbre) {
    if (numbre == 0) {
        putchar('0'); 
        return;
    }
    char buffer[20]; 
    int index = 0;
    while (numbre > 0) {
        int chifoctal = numbre % 8; 
        buffer[index++] = '0' + chifoctal; 
        numbre /= 8;
    }
    while (index > 0) {
        index--;
        putchar(buffer[index]);
    }
}
