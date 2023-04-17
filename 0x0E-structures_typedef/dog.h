#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog's basic info
 * @name: First member
 * @age:Second member
 * @owner:Third member
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_k -typedef for struct dog
 */
typedef struct dog dog_k;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_k *new_dog(char *name, float age, char *owner);
void free_dog(dog_k *d);
char *_strcpy(char *desk, char *src);
int _strlen(char *s);
#endif

