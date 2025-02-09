/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:57:35 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/04 17:53:35 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
Cat :: Cat()
{
	this->_type = "cat";
	std::cout<<"the cat has been created"<<"\n";
}

Cat:: Cat(const Cat &obj):Animal(obj)
{
	_type = std::string (obj._type);
}

Cat & Cat:: operator=(const Cat & other)
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

Cat :: ~Cat ()
{
	std::cout<<"the cat has been destroyed"<<std::endl;
}
void Cat::makeSound()const
{
	std::cout<<"Meaw Meaw"<<std::endl;

}
