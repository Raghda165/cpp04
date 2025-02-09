/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:03:36 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/04 20:17:46 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
#define CAT_HPP
 #include "Animal.hpp"
 #include "Brain.hpp"
 class Cat : public Animal
 {
	private:
		Brain *cerebro;
	public:
		Cat ();
		Cat(const Cat & obj);
		Cat &operator =(const Cat & other);
		~Cat ();


		void makeSound()const;
 };
#endif
