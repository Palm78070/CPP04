#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
private:
 std::string _type;

public:
 Ice();
 Ice(Ice const &);
 Ice &operator=(const Ice &src);
 ~Ice();
 virtual AMateria *clone() const;      // Return a new instance of the same type
 virtual void use(ICharacter &target); // diplay Character using material
};

#endif