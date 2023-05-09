#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
 std::cout << this->_type << " is constructed" << std::endl;
}

Cat::Cat(const Cat &x)
{
 // std::cout << this->_type << " is copied with copy constructor" << std::endl;
 *this = x;
}

Cat &Cat::operator=(const Cat &src)
{
 std::cout << "deep copy => ";
 std::cout << src._type << " is copied with copy assignment operator" << std::endl;
 return (*this);
}

void Cat::makeSound(void) const
{
 std::cout << this->_type << " make sound: meowwwww" << std::endl;
}

Cat::~Cat()
{
 std::cout << this->_type << " is destructed" << std::endl;
}