#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
 std::string _type;

public:
 Animal();
 Animal(std::string type);
 Animal(Animal const &);
 Animal &operator=(const Animal &);
 virtual ~Animal();

 std::string getType(void) const;
 virtual void makeSound(void) const;
};

#endif