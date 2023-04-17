#ifndef DOG_H
#define DOG_H
/**
  *struct dog - dog infos
  *@name: name of dog
  *@age: age of dog
  *@owner: owner of the dog
  *
  *description: long descpription
  **/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif



