/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:51:30 by rthammat          #+#    #+#             */
/*   Updated: 2023/05/11 19:51:42 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string _type;

	public:
		Animal();
		Animal(const std::string& type); // param -> const std::string & type
		Animal(Animal const &);
		Animal &operator=(const Animal &);
		virtual ~Animal();

		const std::string &getType(void) const; // return value -> const std::string &
		virtual void makeSound(void) const;
};

#endif
