#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - define a new type dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_type - type deffinition for dog
 */
typedef struct dog dog_type;

void init_dog(struct dog *D, char *name, float age, char *owner);
void print_dog(struct dog *D);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* _DOG_H_ */
