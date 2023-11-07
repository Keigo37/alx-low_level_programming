#ifndef DOG_H
#define DOG_H
/**
 * struct dog - contains a struct with 3 members
 * @name: first member of char type
 * @age: second member of float type
 * @owner: third member of char type
 *
 * Description: struct dog with 3 members
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
