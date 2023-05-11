/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:00:19 by rthammat          #+#    #+#             */
/*   Updated: 2023/05/11 20:00:23 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #ifndef WRONGANIMAL_HPP
// #define WRONGANIMAL_HPP

#pragma once


class WrongAnimal
{
	protected:
		std::string _type;

	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const &);
		WrongAnimal &operator=(const WrongAnimal &);
		~WrongAnimal();

		std::string getType(void) const;
		void makeSound(void) const;
};

// #endif
