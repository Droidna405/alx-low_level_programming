/**
 * flip_bits - Returns the number of bits needed to
 * flip to get from one number to another.
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;
unsigned int count = 0;

while (xor_result)
{
/* Increment count for each set bit in xor_result */
count += xor_result & 1;
/* Right shift xor_result to check the next bit */
xor_result >>= 1;
}

return (count);
}
