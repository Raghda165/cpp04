/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:05:35 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/04 21:36:42 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
Brain::Brain()
{
	std::cout<<"the Brain of the creature has been created"<<"\n";
}
 Brain:: Brain(const Brain &obj){
	for (int i = 0 ;i < 100;i++)
		ideas[i] = std::string (obj.ideas[i]);
	
 }

Brain  &Brain:: operator=(const Brain & other)
{
	if (this != &other)
	{
		for (int i = 0 ;i < 100;i++)
		   ideas[i] = std::string (other.ideas[i]);
	}

	std::cout<<"Copy assignment operator called"<<std::endl;
	return (*this);
}
Brain::~Brain()
{
	std::cout<< "the brain hes been destroyed"<<"\n";
}
