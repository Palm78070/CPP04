#ifndef BRAIN_H
#define BRAIN_H

#include "AAnimal.hpp"

class Brain
{
private:
 std::string _ideas[100];
 std::string _type;

public:
 Brain();
 Brain(std::string type);
 Brain(Brain const &);
 Brain &operator=(const Brain &);
 ~Brain();
};

#endif