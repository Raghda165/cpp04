/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:18:01 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/04 17:40:07 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
int main()
{
	const Animal* meta = new Animal();
	 const Animal* j = new Dog();
     const Animal* i = new Cat();
	// const WrongAnimal *c = new WrongCat();
	// std::cout << c->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	// c->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	// delete c;
	return 0;
}
