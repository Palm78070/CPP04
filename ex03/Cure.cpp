#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
 // std::cout << "Cure is constructed" << std::endl;
}

Cure::Cure(Cure const &x) : AMateria("cure")
{
 *this = x;
 // std::cout << "Cure is copied by copy constructor" << std::endl;
}

Cure &Cure::operator=(const Cure &src)
{
 if (this != &src)
 {
  this->_type = src._type;
 }
 // std::cout << "Cure is copied by copy assignment operator" << std::endl;
 return (*this);
}

Cure::~Cure()
{
 // std::cout << "Cure is destructed" << std::endl;
}

AMateria *Cure::clone() const
{
 AMateria *clone = NULL;
 try
 {
  clone = new Cure(*this);
 }
 catch (std::bad_alloc)
 {
  std::cout << "Failed to allocate memory for Class AMateria in function clone() of class Cure" << std::endl;
 }
 return (clone);
}

void Cure::use(ICharacter &target)
{
 std::cout << "Cure: \"* heals " << target.getName() << "\'s wounds *\"" << std::endl;
}