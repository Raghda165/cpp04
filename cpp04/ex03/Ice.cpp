/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 22:19:28 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/08 21:12:50 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
Ice::Ice():AMateria("ice"){}

Ice:: Ice(const Ice &obj):AMateria("ice")
{
	type = std::string (obj.type);
}

Ice  & Ice:: operator=(const Ice & other)
{
	if (this == &other)
		return (*this);
	else
	{
		this->type  = other.type;
	}
	std::cout<<"Copy assignment operator called"<<std::endl;
	return (*this);
}

Ice::~Ice()
{
	// std::cout<<"the ice destructor has been called"<<"\n";
}

AMateria* Ice:: clone()const
{
	return(new Ice);
}

void Ice:: use (ICharacter& target)
{
 std::cout <<  "* shoots an ice bolt at "<<target.getName()<<"*"<<"\n";
}
