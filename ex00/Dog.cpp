/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:59:04 by rthammat          #+#    #+#             */
/*   Updated: 2023/05/11 19:59:19 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << this->_type << " is constructed" << std::endl;
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
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << this->_type << " make sound: woofffff" << std::endl;
}

Dog::~Dog()
{
	std::cout << this->_type << " is destructed" << std::endl;
}
