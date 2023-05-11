/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:24:55 by rthammat          #+#    #+#             */
/*   Updated: 2023/05/11 20:25:10 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	IMateriaSource *src = new MateriaSource();
	std::cout << "//////////////Learn Materia////////////" << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << "///////////////////////////////////////" << std::endl;
	std::cout << "\n//////////////Create character: me///////" << std::endl;
	ICharacter *me = new Character("me");
	std::cout << "///////////////////////////////////////" << std::endl;
	std::cout << "\n//////Create + equip Materia to me///////" << std::endl;
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);;
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("cure"));
	me->unequip(0);
	me->equip(src->createMateria("cure"));
	me->unequip(0);
	me->equip(src->createMateria("cure"));
	me->unequip(0);
	me->equip(src->createMateria("cure"));
	me->unequip(0);
	me->equip(src->createMateria("cure"));

	std::cout << "///////////////////////////////////////" << std::endl;
	std::cout << "\n//////////////Create character: Bob///////" << std::endl;
	ICharacter *bob = new Character("bob");
	std::cout << "///////////////////////////////////////" << std::endl;
	std::cout << "\n//////////////Me use materia to Bob///////" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << "///////////////////////////////////////" << std::endl;
	std::cout << "\n//////////////Me unequip materia///////" << std::endl;
	me->unequip(0);
	me->unequip(1);
	std::cout << "///////////////////////////////////////" << std::endl;
	std::cout << "\n//////////////Destroy class///////" << std::endl;
	delete bob;
	delete me;
	delete src;
	std::cout << "///////////////////////////////////////" << std::endl;
	return (0);
}
