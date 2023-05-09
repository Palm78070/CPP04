#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
 std::cout << this->_type << " is constructed" << std::endl;
}

void WrongCat::makeSound(void) const
{
 std::cout << this->_type << " make sound: meowwwww" << std::endl;
}

WrongCat::~WrongCat()
{
 std::cout << this->_type << " is destructed" << std::endl;
}