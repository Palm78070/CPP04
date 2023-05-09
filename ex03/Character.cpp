#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
  std::cout << "Character: " << this->_name << " is constructed" << std::endl;
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
  // std::cout << "Character: " << this->_name << " is copied by copy assignment operator" << std::endl;
  return (*this);
}

Character::~Character()
{
  std::cout << "Character: " << this->getName() << " is destructed" << std::endl;
  int i = -1;
  while (++i < 4)
  {
    if (this->_inventory[i] != NULL)
    {
      delete this->_inventory[i];
      this->_inventory[i] = NULL;
    }
  }
}

std::string const &Character::getName(void) const
{
  return (this->_name);
}

void Character::equip(AMateria *m)
{
  int i = -1;
  while (++i < 4)
  {
    if (this->_inventory[i] == NULL)
    {
      this->_inventory[i] = m;
      std::cout << "Character: " << this->getName() << " inventory[" << i << "] is equiped with " << m->getType() << std::endl;
      return;
    }
  }
  std::cout << "Character: " << this->getName() << " cannot equip Materias " << m->getType() << std::endl;
}

void Character::unequip(int idx)
{
  if (idx >= 0 && idx < 4)
  {
    if (this->_inventory[idx] == NULL)
    {
      std::cout << "Character: " << this->getName() << " cannot unequip Materias because inventory[" << idx << "] is empty" << std::endl;
      return;
    }
    std::cout << "Character: " << this->getName() << " unequip Materias " << this->_inventory[idx]->getType() << std::endl;
    delete this->_inventory[idx];
    this->_inventory[idx] = NULL;
    return;
  }
  std::cout << "Character: " << this->getName() << " cannot unequip Materias because index is not in the range 0 - 3" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
  if (!(idx >= 0 && idx < 4))
  {
    std::cout << "Character: " << this->getName() << " cannot use Materias because index is not in the range 0 - 3" << std::endl;
    return;
  }
  if (this->_inventory[idx] == NULL)
  {
    std::cout << "Character: " << this->getName() << " cannot use Materias because inventory[" << idx << "] is empty" << std::endl;
    return;
  }
  std::cout << "Character: " << this->getName() << " use Materias => " << this->_inventory[idx]->getType() << std::endl;
  this->_inventory[idx]->use(target);
}