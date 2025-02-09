/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 22:44:01 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/08 21:14:03 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():AMateria("cure"){}

Cure:: Cure(const Cure &obj):AMateria("cure")
{
	type = std::string (obj.type);
}

Cure & Cure:: operator=(const Cure & other)
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

Cure::~Cure()
{
	// std::cout<<"the cure destructor has been called"<<"\n";
}

AMateria* Cure:: clone()const
{
	return(new Cure);
}

void Cure:: use (ICharacter& target)
{
 std::cout <<  "* heals "<<target.getName()<<"’s wounds *"<<"\n";
}
