#include <stdio.h>
#include "bit_ops.h"

// Return the nth bit of x.
// Assume 0 <= n <= 31
unsigned get_bit(unsigned x,
                 unsigned n) {
    // YOUR CODE HERE
    // Returning -1 is a placeholder (it makes
    // no sense, because get_bit only returns
    // 0 or 1)
    return (1 & (x >> n));
    /*
        x = 10110
        n = 3
        x >> n = 10
        1 & 10 = 0
    */
}
// Set the nth bit of the value of x to v.
// Assume 0 <= n <= 31, and v is 0 or 1
void set_bit(unsigned * x,
             unsigned n,
             unsigned v) {
    // YOUR CODE HERE
    (*x) = ((*x) & ~(1 << n)) | (v << n);
    /*
        x = 10010100
        n = 3
        v = 1
        1 << 3 = 1000 
        ~(1 << 3) = 0111
        v << n = 1000
        10010100 & 0111 = 10010100 
        10010100 | 1000 = 10011100
    */
}
// Flip the nth bit of the value of x.
// Assume 0 <= n <= 31
void flip_bit(unsigned * x,
              unsigned n) {
    // YOUR CODE HERE
    (*x) = (*x) ^ (1 << n);
    /*
        x = 10100
        n = 2
        1 << n = 100
        10100 ^ 100 = 10000

        x = 10011
        n = 2
        1 << n = 100
        10011 ^ 100 = 10111
    */
}

