/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:14:55 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/04 21:19:41 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
Dog :: Dog()
{
	this->_type = "dog";
	this ->cerebro = new Brain();
	std::cout<<"the dog has been created"<<"\n";
}

Dog:: Dog(const Dog &obj):Animal(obj)
{
	_type = std::string (obj._type);
	this->cerebro=new Brain(*(obj.cerebro));
}

Dog & Dog:: operator=(const Dog & other)
{
	if (this == &other)
		return (*this);
	else
	{
		delete(cerebro);
		this->cerebro=new Brain(*(other.cerebro));
		this->_type  = other._type;
	}
	std::cout<<"Copy assignment operator called"<<std::endl;
	return (*this);
}

Dog :: ~Dog ()
{
	delete this ->cerebro;
	std::cout<<"the dog has been destroyed"<<std::endl;
}
void Dog::makeSound()const
{
	std::cout<<"Haw Haw"<<std::endl;

}
