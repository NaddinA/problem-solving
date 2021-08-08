/* PROB: Write a function that takes an integer as input, and returns the number of bits that are equal to one in the binary representation of that number. 
You can guarantee that input is non-negative.
Example: The binary representation of 1234 is 10011010010, so the function should return 5 in this case */

/* ALG: For all positive decimal values, Increment bitcount for each 8th bit 
that is equal to one then shift the binary value 1 bit to the right each time the final bit is added to the sum of BitCount. 
This gets us total no. of 1 bits cuz each added 0 bit changes nothing. */

/* For some reason this doesn't work with immensely large values and I wanna cry can't pass random tests */ 

#include <stddef.h>
size_t countBits(unsigned value);

size_t countBits(unsigned value)
{
      unsigned int BitCount = 0;
      while (value) {
          BitCount += value & 1;
          value >>= 1;
      }
      return BitCount;
}
