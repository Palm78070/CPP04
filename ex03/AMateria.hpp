#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:
 std::string _type;

public:
 AMateria(std::string const &type);
 AMateria(AMateria const &);
 AMateria &operator=(const AMateria &src);
 ~AMateria();
 std::string const &getType() const;   // Return Materia type
 virtual AMateria *clone() const = 0;  // Return a new instance of the same type
 virtual void use(ICharacter &target); // diplay Character using material
};

#endif