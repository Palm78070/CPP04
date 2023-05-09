#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
 std::cout << _type << " is constructed" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
 std::cout << "WrongAnimal: " << _type << " is constructed" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &x)
{
 std::cout << this->_type << " is copied with copy constructor" << std::endl;
 *this = x;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
 std::cout << this->_type << " is copied with copy assignment operator" << std::endl;
 if (this != &src)
 {
  this->_type = src._type;
 }
 return (*this);
}

std::string WrongAnimal::getType(void) const
{
 return (this->_type);
}

void WrongAnimal::makeSound(void) const
{
 std::cout << this->_type << " make sound: ..." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
 std::cout << "WrongAnimal is destructed" << std::endl;
}