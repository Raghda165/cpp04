/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:34:47 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/04 17:50:40 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
Animal :: Animal()
{
	std::cout<<"the Animal row has been created "<<"\n";
}
Animal:: Animal(const Animal &obj)
{
	_type = std::string (obj._type);
}

Animal  & Animal:: operator=(const Animal & other)
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
std::string Animal::getType()const
{
	return(this->_type);
}

Animal :: ~Animal()
{
	std::cout <<"the Animal object has been destroyed"<<"\n";
}

void Animal::makeSound()const
{
	std::cout <<"make sound"<<"\n";
}

