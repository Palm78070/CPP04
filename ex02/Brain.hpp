/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:10:12 by rthammat          #+#    #+#             */
/*   Updated: 2023/05/11 20:10:20 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include "AAnimal.hpp"

class Brain
{
	private:
		std::string _ideas[100];
		std::string _type;

	public:
		Brain();
		Brain(std::string type);
		Brain(Brain const &);
		Brain &operator=(const Brain &);
		~Brain();
};

#endif
