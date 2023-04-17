#ifndef DOG_H
#define DOG_H
/**
 * struct dog - the dog's information or details
 * @name: the first member
 * @age: the second member
 * @owner: the third member
 * Description: the description
 */
struct dog
{
	char *owner;
	char *name;
	float age;
};

/**
 * dog_t - the typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
