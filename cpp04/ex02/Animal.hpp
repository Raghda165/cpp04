/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:19:59 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/07 17:01:34 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
class Animal
{
 protected:
	std::string _type;

public:
    Animal();
	Animal(const Animal &obj);
	Animal & operator=(const Animal &other);
	virtual ~Animal();

	std::string getType()const;
	void virtual makeSound() const= 0;

};

#endif
