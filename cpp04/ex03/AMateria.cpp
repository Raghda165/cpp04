/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 22:03:47 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/08 21:13:38 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::  AMateria(std::string const & type)
{
	this->type = type;
}
AMateria:: AMateria(const AMateria &obj)
{
	type = std::string (obj.type);
}

AMateria & AMateria:: operator=(const AMateria & other)
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

AMateria::~AMateria()
{
	// std::cout<<"the ice destructor has been called"<<"\n";
}

std::string const & AMateria:: getType() const
{
	return(this->type);
}

void AMateria:: use(ICharacter& target)
{
	std::cout<<"uses type at "<<target.getName()<<"\n";
}
