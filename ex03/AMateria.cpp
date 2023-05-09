#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type)
{
 // std::cout << "AMateria is constructed" << std::endl;
}

AMateria::AMateria(AMateria const &x)
{
 *this = x;
}

AMateria &AMateria::operator=(const AMateria &src)
{
 if (this != &src)
 {
  this->_type = src._type;
 }
 return (*this);
}

AMateria::~AMateria()
{
 // std::cout << "AMateria is destructed" << std::endl;
}

std::string const &AMateria::getType() const
{
 return (this->_type);
}

void AMateria::use(ICharacter &target)
{
 std::cout << "Materia: \"* use material at " << target.getName() << " *\"";
}