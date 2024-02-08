## Bit Manipulation ##
# Manipulation of bits and use of bitwise operators #
0. A function that converts a binary number to an unsigned int.
   Prototype: unsigned int binary_to_uint(const char *b);
   0-binary_to_uint.c

1. A function that prints the binary representation of a number.
   Prototype: void print_binary(unsigned long int n);
   1-print_binary.c

2. A function that returns the value of a bit at a given index.
   Prototype: int get_bit(unsigned long int n, unsigned int index);
   2-get_bit.c

3. A function that sets the value of a bit to 1 at a given index.
   Prototype: int set_bit(unsigned long int *n, unsigned int index);
   3-set_bit.c

4. A function that sets the value of a bit to 0 at a given index.
   Prototype: int clear_bit(unsigned long int *n, unsigned int index);
   4-clear_bit.c

5. A function that returns the number of bits you would need to flip
   to get from one number to another.
   Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
   5-flip_bits.c