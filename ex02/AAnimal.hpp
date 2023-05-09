#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
protected:
 std::string _type;

public:
 AAnimal();
 AAnimal(std::string type);
 AAnimal(AAnimal const &);
 AAnimal &operator=(const AAnimal &);
 virtual ~AAnimal();

 std::string getType(void) const;
 virtual void makeSound(void) const = 0;
};

#endif