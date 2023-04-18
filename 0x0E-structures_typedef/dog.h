#ifndef DOG_H
#define DOG_H
/**
 *struct dog - dog structure
 *@name: dog's name
 *@owner: owner of the dog
 *@age: age of the dog
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);



#endif
