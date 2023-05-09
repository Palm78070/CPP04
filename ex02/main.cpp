#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
 AAnimal *cat = new Cat();
 cat->makeSound();
 delete cat;
 AAnimal *dog = new Dog();
 dog->makeSound();
 delete dog;
 ///////////Test abstract class/////////////
 // AAnimal *animal = new AAnimal();
 // animal->makeSound();
 // delete animal;
 ////Object of abstract class is not allowed => makeSound() is a pure virtual function
 return (0);
}