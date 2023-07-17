#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new type
 * @name: 1st element
 * @age: 2nd element
 * @owner: 3rd element
 */


struct dog
{
    char *name,
    float age,
    char *owner;

};

typedef struct dog dog_t;


#endif