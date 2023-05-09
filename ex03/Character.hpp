#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
 std::string _name;
 AMateria *_inventory[4];

public:
 Character(std::string name);
 Character(Character const &);
 Character &operator=(const Character &src);
 ~Character();
 virtual std::string const &getName(void) const;
 virtual void equip(AMateria *m);
 virtual void unequip(int idx);
 virtual void use(int idx, ICharacter &target);
};

#endif