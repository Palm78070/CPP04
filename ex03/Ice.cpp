#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
 // std::cout << "Ice is constructed" << std::endl;
}

Ice::Ice(Ice const &x) : AMateria("ice")
{
 *this = x;
 // std::cout << "Ice is copied by copy constructor" << std::endl;
}

Ice &Ice::operator=(const Ice &src)
{
 if (this != &src)
 {
  this->_type = src._type;
 }
 // std::cout << "Ice is copied by copy assignment operator" << std::endl;
 return (*this);
}

Ice::~Ice()
{
 // std::cout << "Ice is destructed" << std::endl;
}

AMateria *Ice::clone() const
{
 AMateria *clone = NULL;
 try
 {
  clone = new Ice(*this);
 }
 catch (std::bad_alloc)
 {
  std::cout << "Failed to allocate memory for Class AMateria in function clone() of class Ice" << std::endl;
 }
 return (clone);
}

void Ice::use(ICharacter &target)
{
 std::cout << "Ice: \"* shoots an ice bolt at " << target.getName() << " *\"" << std::endl;
}