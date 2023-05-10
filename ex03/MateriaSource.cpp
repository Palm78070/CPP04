#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
  // std::cout << "MateriaSource is constructed" << std::endl;
  int i = -1;
  while (++i < 4)
    this->_matLearn[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &x)
{
  *this = x;
  // std::cout << "MateriaSource is copied by copy constructor" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{
  // std::cout << "MateriaSource is copied by copy assignment operator" << std::endl;
  int i = -1;
  if (this != &src)
  {
    while (++i < 4)
    {
      if (this->_matLearn[i] != NULL)
      {
        delete this->_matLearn[i];
        this->_matLearn[i] = NULL;
      }
      this->_matLearn[i] = src._matLearn[i];
    }
  }
  return (*this);
}

MateriaSource::~MateriaSource()
{
  // std::cout << "MateriaSource is destructed" << std::endl;
  int i = -1;
  while (++i < 4)
  {
    if (this->_matLearn[i] != NULL)
    {
      std::cout << "Clear learning materia => ";
      delete this->_matLearn[i];
    }
  }
}

void MateriaSource::learnMateria(AMateria *m)
{
  int i = -1;
  while (++i < 4)
  {
    if (this->_matLearn[i] == NULL)
    {
      this->_matLearn[i] = m;
      // std::cout << "Learn materia: " << m->getType() << " and store in materia[" << i << "]" << std::endl;
      return;
    }
  }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
  int i = -1;
  while (++i < 4)
  {
    if (this->_matLearn[i] != NULL && this->_matLearn[i]->getType() == type)
    {
      std::cout << "Materia: " << this->_matLearn[i]->getType() << " is created from matLearn[" << i << "]" << std::endl;
      return (this->_matLearn[i]->clone());
    }
  }
  std::cout << "Cannot create materia because type is unknown" << std::endl;
  return (0);
}