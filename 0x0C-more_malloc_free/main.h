/**
 * _putchar - writes the character c to stdout
 */
int _putchar(char c);

/**
 * *malloc_checked - function that allocates memory using malloc
 */
void *malloc_checked(unsigned int b);

/**
 * *string_nconcat - function that concatenates two strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * *_calloc - function that allocates memory for an array, using malloc
 */
void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * *array_range - function that creates an array of integers
 */
int *array_range(int min, int max);

/**
 * *_realloc - function that reallocates a memory block using malloc and free
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
