/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 22:17:29 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/07 22:35:48 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
 #include "AMateria.hpp"
 class Ice :public AMateria
 {
	private:
		/* data */
	public:
		Ice();
		Ice(const Ice &obj);
		Ice & operator=(const Ice &other);
		~Ice();

	AMateria* clone() const ;
	void use(ICharacter& target);
 };



#endif
