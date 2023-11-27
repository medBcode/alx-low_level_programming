#ifndef _DOG_H_
#define _DOG_H_

/*
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description : named dog that stores some information
 * about any dog, consisting of; the name, age and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
