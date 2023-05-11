/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:00:37 by rthammat          #+#    #+#             */
/*   Updated: 2023/05/11 20:00:44 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << this->_type << " is constructed" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << this->_type << " make sound: meowwwww" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << this->_type << " is destructed" << std::endl;
}
