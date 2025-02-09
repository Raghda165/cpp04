/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:13:21 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/04 17:52:49 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
 #include "Animal.hpp"
 class Dog : public Animal
 {
	public:
		Dog ();
		Dog(const Dog & obj);
		Dog &operator =(const Dog & other);
		~Dog ();

		void makeSound()const ;
 };
#endif
