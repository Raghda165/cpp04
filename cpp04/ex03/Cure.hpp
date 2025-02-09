/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 22:13:06 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/07 22:43:30 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
 #include "AMateria.hpp"
 class Cure :public AMateria
 {
	public:
		Cure();
		Cure(const Cure &obj);
		Cure & operator=(const Cure &other);
		~Cure();

	AMateria* clone() const ;
	void use(ICharacter& target);
 };



#endif
