#ifndef DOG_H
#define DOG_H

/**
  * struct dog - Structure representing a dog
  * @name: Pointer to character array storing the name of dog
  * @age: Floating-point value representing age of dog
  * @owner: Pointer to character array storing name of owner
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
