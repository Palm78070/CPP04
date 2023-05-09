#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
 // std::cout << "Character: " << this->_name << " is constructed" << std::endl;
 int i = -1;
 while (++i < 4)
  this->_inventory[i] = NULL;
}

Character::Character(Character const &x) : _name(x._name)
{
 *this = x;
 // std::cout << "Character: " << this->_name << " is copied by copy constructor" << std::endl;
}

Character &Character::operator=(const Character &src)
{
 int i = -1;

 if (this != &src)
 {
  while (++i < 4)
   this->_inventory[i] = src._inventory[i];
  this->_name = src._name;
 }
 // std::cout << "Ice is copied by copy assignment operator" << std::endl;
 return (*this);
}

Character::~Character()
{
 // std::cout << "Character is destructed" << std::endl;
}

std::string const &Character::getName(void) const
{
 return (this->_name);
}