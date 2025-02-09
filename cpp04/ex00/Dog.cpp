/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:14:55 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/04 17:53:15 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
Dog :: Dog()
{
	this->_type = "dog";
	std::cout<<"the dog has been created"<<"\n";
}

Dog:: Dog(const Dog &obj)
{
	_type = std::string (obj._type);
}

Dog & Dog:: operator=(const Dog & other)
{
	if (this == &other)
		return (*this);
	else
	{
		this->_type  = other._type;
	}
	std::cout<<"Copy assignment operator called"<<std::endl;
	return (*this);
}

Dog :: ~Dog ()
{
	std::cout<<"the cat has been destroyed"<<std::endl;
}
void Dog::makeSound()const
{
	std::cout<<"Haw Haw"<<std::endl;

}
