/**Author: Joseph Flodman
 *         jflodman3@huskers.unl.edu
 * Date: 9/10/2024
 *
 */
#include <stdio.h>
#include <math.h>
#include<stdlib.h>

int isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return 1; // Leap year
            } else {
                return 0; // Not a leap year
            }
        } else {
            return 1; // Leap year
        }
    } else {
        return 0; // Not a leap year
    }
}

int main() {
    int year;

    // Test cases for leap year
    int testYears[] = {2000, 1900, 2004, 2001, 2100};

    for (int i = 0; i < 5; i++) {
        year = testYears[i];
        if (isLeapYear(year)) {
            printf("%d is a leap year.\n", year);
        } else {
            printf("%d is not a leap year.\n", year);
        }

        }

    return 0;
}
