/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:13:21 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/04 21:29:19 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
 #include "Brain.hpp"
 #include "Animal.hpp"
 class Dog : public Animal
 {
	private:
		Brain *cerebro;
	public:
		Dog ();
		Dog(const Dog & obj);
		Dog &operator =(const Dog & other);
		~Dog ();

		void makeSound()const ;
 };
#endif
