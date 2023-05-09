#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
 std::cout << "//////Test Class Cat//////" << std::endl;
 const Animal *cat = new Cat();
 delete cat;

 std::cout << "\n//////Test Class Dog//////" << std::endl;
 const Animal *dog = new Dog();
 delete dog;

 std::cout << "\n//////Test deep copy of Class Cat//////" << std::endl;
 const Cat cat2;
 const Cat tmp = cat2;
 std::cout << "///////////////////////////////////////" << std::endl;

 std::cout << "\n//////Test deep copy of Class Dog//////" << std::endl;
 const Dog dog2;
 const Dog tmp2 = dog2;
 std::cout << "///////////////////////////////////////" << std::endl;

 std::cout << "\n//////Test store diff sub-type(But same super-type) in  array///" << std::endl;
 const Animal *arr[4] = {new Cat, new Cat, new Dog, new Dog};
 int i = -1;
 while (++i < 4)
 {
  std::cout << "\n///////delete arr[" << i << "]/////////" << std::endl;
  delete arr[i];
  std::cout << "///////////////////////////////////////" << std::endl;
 }
 return (0);
}
