#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
 std::string _type;

public:
 WrongAnimal();
 WrongAnimal(std::string type);
 WrongAnimal(WrongAnimal const &);
 WrongAnimal &operator=(const WrongAnimal &);
 ~WrongAnimal();

 std::string getType(void) const;
 void makeSound(void) const;
};

#endif