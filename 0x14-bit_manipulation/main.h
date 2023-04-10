/**
 * _putchar - writes the character c to stdout
 */
int _putchar(char c);

/**
 * binary_to_uint - function that coverts a binary number an unsigned int.
 */
unsigned int binary_to_uint(const char *b);

/**
 * print_binary - function that prints the binary representation of a number
 */
void print_binary(unsigned long int n);

/**
 * get_bit - function that returns the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index);

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 */
int set_bit(unsigned long int *n, unsigned int index);

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 */
int clear_bit(unsigned long int *n, unsigned int index);

/**
 * flip_bits - function that returns the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/**
 * get_endianness - function that checks the endianness
 */
int get_endianness(void);
