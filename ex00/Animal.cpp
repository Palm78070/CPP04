/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:51:05 by rthammat          #+#    #+#             */
/*   Updated: 2023/05/11 19:51:23 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() 
: _type("Animal")
{
	std::cout << this->_type << " is constructed" << std::endl;
}

Animal::Animal(const std::string& type) 
: _type(type)
{
	std::cout << "Animal: " << this->_type << " is constructed" << std::endl;
}

Animal::Animal(Animal const &x)
{
	std::cout << this->_type << " is copied with copy constructor" << std::endl;
	*this = x;
}

Animal &Animal::operator=(const Animal &src)
{
	std::cout << this->_type << " is copied with copy assignment operator" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
	}
	return (*this);
}

const std::string& Animal::getType(void) const
{
	return (this->_type);
}

void Animal::makeSound(void) const
{
	std::cout << this->_type << " make sound: ..." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal is destructed" << std::endl;
}
