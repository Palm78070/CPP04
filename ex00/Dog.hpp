#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
 Dog();
 Dog(Dog const &);
 Dog &operator=(const Dog &);
 ~Dog();
 virtual void makeSound(void) const;
};

#endif