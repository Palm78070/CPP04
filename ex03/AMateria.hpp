/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:18:50 by rthammat          #+#    #+#             */
/*   Updated: 2023/05/11 20:18:58 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;
class AMateria
{
	protected:
		std::string _type;

	public:
		AMateria(std::string const &type);
		AMateria(AMateria const &);
		AMateria &operator=(const AMateria &src);
		virtual ~AMateria();
		std::string const &getType() const;   // Return Materia type
		virtual AMateria *clone() const = 0;  // Return a new instance of the same type
		virtual void use(ICharacter &target); // diplay Character using material
};

#endif
