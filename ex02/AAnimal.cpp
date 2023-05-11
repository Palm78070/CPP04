/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:07:37 by rthammat          #+#    #+#             */
/*   Updated: 2023/05/11 20:09:32 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal")
{
	std::cout << this->_type << " is constructed" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "AAnimal: " << this->_type << " is constructed" << std::endl;
}

AAnimal::AAnimal(AAnimal const &x)
{
	std::cout << this->_type << " is copied with copy constructor" << std::endl;
	*this = x;
}

AAnimal &AAnimal::operator=(const AAnimal &src)
{
	std::cout << this->_type << " is copied with copy assignment operator" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

std::string AAnimal::getType(void) const
{
	return (this->_type);
}

/*void AAnimal::makeSound(void) const
{
	std::cout << this->_type << " make sound: ..." << std::endl;
}*/

AAnimal::~AAnimal()
{
	std::cout << "AAnimal is destructed" << std::endl;
}
