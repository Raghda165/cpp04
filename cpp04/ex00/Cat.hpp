/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:03:36 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/04 17:53:25 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
#define CAT_HPP
 #include "Animal.hpp"
 class Cat : public Animal
 {
	public:
		Cat ();
		Cat(const Cat & obj);
		Cat &operator =(const Cat & other);
		~Cat ();

		void makeSound()const;
 };
#endif
