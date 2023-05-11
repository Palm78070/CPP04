/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:04:18 by rthammat          #+#    #+#             */
/*   Updated: 2023/05/11 20:04:32 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << this->_type << " is constructed" << std::endl;
	try
	{
		this->_brain = new Brain(this->_type);
	}
	catch (std::bad_alloc)
	{
		std::cout << "Failed to allocate memory for _brain member in Class " << this->_type << std::endl;
	}
}

Dog::Dog(const Dog &x)
{
	// std::cout << this->_type << " is copied with copy constructor" << std::endl;
	*this = x;
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "deep copy => ";
	std::cout << src._type << " is copied with copy assignment operator" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
		try
		{
			this->_brain = new Brain(*src._brain);
		}
		catch (std::bad_alloc)
		{
			std::cout << "Failed to allocate memory for _brain member in " << this->_type << std::endl;
		}
	}
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << this->_type << " make sound: woofffff" << std::endl;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << this->_type << " is destructed" << std::endl;
}
