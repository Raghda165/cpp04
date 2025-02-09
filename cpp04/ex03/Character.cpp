/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:10:38 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/08 21:12:15 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
Character ::Character(std::string name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
    {
            inventory[i] = NULL;
    }
	// std::cout << "the charcter constructor has been called"<<"\n";
}

Character ::Character (const Character  &obj)
{
	name = std::string (obj.name);
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

Character & Character:: operator=(const Character & other)
{
	if (this == &other)
		return (*this);
	else
	{
		this->name  = other.name;
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

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
				delete inventory[i];
		}
	// std::cout<<"the character destructor has been called"<<"\n";
}
void Character::  equip(AMateria* m)
{
	int i;
	i = 0;
	while(i < 4 && this->inventory[i])
		i++;
	if(i==4)
	  unequip(i - 1);
    this->inventory[i] = m;
}
void Character::unequip(int idx)
{
	this->inventory[idx] = NULL;
}

void  Character :: use(int idx, ICharacter& target)
{
	this->inventory[idx]-> use(target);
}
std::string const & Character:: getName() const
{
	return(this->name);
}



