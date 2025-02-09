/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 15:24:14 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/08 21:13:48 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource:: MateriaSource()
{
	for (int i = 0; i < 4; i++)
    {
            inventory[i] = NULL;
    }
	// std::cout <<"the materia constructor has been called"<<"\n";

}
MateriaSource ::MateriaSource (const MateriaSource  &obj)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete inventory[i];
	}
    for (int i = 0; i < 4; i++)
    {
        if (obj.inventory[i])
            inventory[i] = obj.inventory[i]->clone();
        else
            inventory[i] = NULL;
    }
}

MateriaSource & MateriaSource:: operator=(const MateriaSource & other)
{
	if (this == &other)
		return (*this);
	else
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
				delete inventory[i];
		}
		for (int i = 0; i < 4; i++)
		{
			if (other.inventory[i])
				inventory[i] = other.inventory[i]->clone();
			else
				inventory[i] = NULL;
		}
	}
	std::cout<<"Copy assignment operator called"<<std::endl;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	// for (int i = 0; i < 4; i++)
	// {
	// 	if (this->inventory[i])
	// 		delete inventory[i];
	// }
	// std::cout<<"the MateriaSource destructor has been called"<<"\n";
}

void MateriaSource::learnMateria(AMateria* a)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i]==  NULL)
		{
			inventory[i] = a->clone();
			return ;
		}
	}
}
 AMateria* MateriaSource::createMateria(std::string const &type)
 {
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i]->getType()==  type)
			return(this->inventory[i]);
	}
	return(NULL);
 }
