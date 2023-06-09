/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:13:07 by rthammat          #+#    #+#             */
/*   Updated: 2023/05/11 20:13:23 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	AAnimal aml;
	std::cout << "////////Test cat class//////" << std::endl;
	AAnimal *cat = new Cat();
	cat->makeSound();
	delete cat;
	std::cout << "///////////////////////////" << std::endl;
	std::cout << "\n////////Test dog class//////" << std::endl;
	AAnimal *dog = new Dog();
	dog->makeSound();
	delete dog;
	std::cout << "///////////////////////////" << std::endl;
	///////////Test abstract class/////////////
	// AAnimal *animal = new AAnimal();
	// animal->makeSound();
	// delete animal;
	////Object of abstract class is not allowed => makeSound() is a pure virtual function
	return (0);
}
