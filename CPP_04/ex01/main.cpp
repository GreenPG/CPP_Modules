/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:43:31 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/09 13:53:27 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include <new>

int main()
{
	Animal *animTab[6];
	for (int i = 0; i < 3; i++) {
		animTab[i] = new Dog;
	}
	for (int i = 3; i < 6; i++) {
		animTab[i] = new Cat;
	}
	for (int i = 0; i < 6; i++) {
		animTab[i]->makeSound();
	}
	for (int i = 0; i < 6; i++) {
		delete animTab[i];
	}
	Dog	rex("bones");
	Dog lassie(rex);
	std::cout << "Rex thinks of " << rex.getIdea() << std::endl;
	std::cout << "Lassie thinks of " << lassie.getIdea() << std::endl;
	rex.setIdeas("stick");
	std::cout << "Rex thinks of " << rex.getIdea() << std::endl;
	std::cout << "Lassie thinks of " << lassie.getIdea() << std::endl;
	return 0;
}
