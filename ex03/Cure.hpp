/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:21:27 by rthammat          #+#    #+#             */
/*   Updated: 2023/05/11 20:21:34 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	private:
		std::string _type;

	public:
		Cure();
		Cure(Cure const &);
		Cure &operator=(const Cure &src);
		~Cure();
		virtual AMateria *clone() const;      // Return a new instance of the same type
		virtual void use(ICharacter &target); // diplay Character using material
};

#endif
