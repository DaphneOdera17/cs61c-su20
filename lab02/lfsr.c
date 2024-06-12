#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */
    int n0, n2, n3, n5;
    n0 = (*reg) & 1;
    n2 = (*reg >> 2) & 1;
    n3 = (*reg >> 3) & 1;
    n5 = (*reg >> 5) & 1;
    int MSB = n0 ^ n2 ^ n3 ^ n5;
    (*reg) = (*reg >> 1) | (MSB << 15);
}

