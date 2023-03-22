/**
 * _putchar - writes the character c to stdout
 */
int _putchar(char c);

/**
 * print_name - function that prints a name
 */
void print_name(char *name, void (*f)(char *));

/**
 * array_iterator - function that executes a function given as a parameter on each element of an array
 */
void array_iterator(int *array, size_t size, void (*action)(int));

/**
 * int_index - function that searches for an integer
 */
int int_index(int *array, int size, int (*cmp)(int));

/**
 * op_add - returns the sum of a and b
 */
int op_add(int a, int b);

/**
 * op_sub - returns the difference of a and b
 */
int op_sub(int a, int b);

/**
 * op_mul - returns the product of a and b
 */
int op_mul(int a, int b);

/**
 * op_div - returns the result of the division of a by b
 */
int op_div(int a, int b);

/**
 * op_mod - returns the remainder of the division of a by b
 */
int op_mod(int a, int b);

/**
 * *get_op_func - function that selects the correct function to perform the operation asked by the user
 */
int (*get_op_func(char *s))(int, int);
