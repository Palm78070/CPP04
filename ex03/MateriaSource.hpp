#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
 AMateria *_matLearn[4];

public:
 MateriaSource();
 MateriaSource(MateriaSource const &);
 MateriaSource &operator=(const MateriaSource &src);
 ~MateriaSource();
 virtual void learnMateria(AMateria *);
 virtual AMateria *createMateria(std::string const &type);
};

#endif