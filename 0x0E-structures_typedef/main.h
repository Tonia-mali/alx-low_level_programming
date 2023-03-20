/**
 * _putchar - writes the character c to stdout
 */
int _putchar(char c);

/**
 * init_dog - function that initialize a variable of type struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - function that prints a struct dog
 */
void print_dog(struct dog *d);

/**
 * *new_dog - function that creates a new dog
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - function that frees dogs
 */
void free_dog(dog_t *d);
