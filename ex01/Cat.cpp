#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
 std::cout << this->_type << " is constructed" << std::endl;
 try
 {
  this->_brain = new Brain(this->_type);
 }
 catch (std::bad_alloc)
 {
  std::cout << "Failed to allocate memory for _brain member in Class " << this->_type << std::endl;
 }
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
 if (this != &src)
 {
  this->_type = src._type;
  try
  {
   this->_brain = new Brain(*src._brain);
  }
  catch (std::bad_alloc)
  {
   std::cout << "Failed to allocate memory for _brain member in " << this->_type << std::endl;
  }
 }
 return (*this);
}

void Cat::makeSound(void) const
{
 std::cout << this->_type << " make sound: meowwwww" << std::endl;
}

Cat::~Cat()
{
 delete this->_brain;
 std::cout << this->_type << " is destructed" << std::endl;
}