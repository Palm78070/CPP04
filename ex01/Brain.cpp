/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:03:01 by rthammat          #+#    #+#             */
/*   Updated: 2023/05/11 20:03:16 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	// std::cout << "Brain is constructed" << std::endl;
}

Brain::Brain(std::string type) : _type(type)
{
	std::cout << "Brain of " << this->_type << " is constructed" << std::endl;
}

Brain::Brain(Brain const &x)
{
	*this = x;
	// std::cout << "Brain of " << this->_type << " is copied with copy constructor" << std::endl;
}

Brain &Brain::operator=(const Brain &src)
{
	int i = -1;
	if (this != &src)
	{
		this->_type = src._type;
		while (++i < 100)
			this->_ideas[i] = src._ideas[i];
	}
	std::cout << "deep copy => ";
	std::cout << "Brain of " << this->_type << " is copied with copy assignment operator" << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain of " << this->_type << " is destructed" << std::endl;
}
