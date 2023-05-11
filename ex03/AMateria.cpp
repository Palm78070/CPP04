/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:18:16 by rthammat          #+#    #+#             */
/*   Updated: 2023/05/11 20:19:10 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "AMateria: " << this->_type << " is constructed" << std::endl;
}

AMateria::AMateria(AMateria const &x)
{
	*this = x;
}

AMateria &AMateria::operator=(const AMateria &src)
{
	if (this != &src)
	{
		this->_type = src._type;
	}
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria: " << this->_type << " is destructed" << std::endl;
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "Materia: \"* use material at " << target.getName() << " *\"";
}
