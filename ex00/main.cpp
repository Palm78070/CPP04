/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:01:10 by rthammat          #+#    #+#             */
/*   Updated: 2023/05/11 20:01:22 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main(void)
{
	std::cout << "/////////Create class Animal => type Animal/////////" << std::endl;
	const Animal *meta = new Animal();
	std::cout << "////////////////////////////////////////////////////" << std::endl;
	std::cout << "\n/////////Create class Animal => sub-type: Dog/////////" << std::endl;
	const Animal *j = new Dog();
	std::cout << "////////////////////////////////////////////////////" << std::endl;
	std::cout << "\n/////////Create class Animal => sub-type: Cat/////////" << std::endl;
	const Animal *i = new Cat();
	std::cout << "////////////////////////////////////////////////////" << std::endl;
	std::cout << "\n/////////Create class Animal => sub-type: Cat/////////" << std::endl;
	const Animal k = *i;
	const Animal l(*i);
	std::cout << "////////////////////////////////////////////////////" << std::endl;
	std::cout << "\n/////////Get type of Dog//////////////" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << "/////////////////////////////////////////" << std::endl;
	std::cout << "\n/////////Get type of Cat//////////////" << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "/////////////////////////////////////////" << std::endl;
	std::cout << "\n////////////Make sound//////////////" << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "//////////////////////////////////////" << std::endl;
	std::cout << "\n////////////Destroy Class//////////////" << std::endl;
	delete (meta);
	delete (i);
	delete (j);
	std::cout << "//////////////////////////////////////" << std::endl;
	std::cout << "\n/////////////////Wrong Animal///////////////" << std::endl;
	const WrongAnimal *meta2 = new WrongAnimal();
	const WrongAnimal *i2 = new WrongCat();
	std::cout << i2->getType() << " " << std::endl;
	i2->makeSound(); // will output the cat sound!
	meta2->makeSound();
	delete (meta2);
	delete (i2);
	return (0);
}
