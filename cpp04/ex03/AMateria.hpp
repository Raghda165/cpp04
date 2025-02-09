/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 20:24:24 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/08 19:56:30 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
 #include <iostream>
 #include "ICharacter.hpp"
class ICharacter;
class AMateria
{
	protected:
	 std :: string type;
	public:
	   AMateria();
	   AMateria(std::string const & type);
	   AMateria(const AMateria &obj);
	   AMateria & operator=(const AMateria &other);
	   virtual ~AMateria();
	   std::string const & getType() const; //Returns the materia type
	   virtual AMateria* clone() const = 0;
	   virtual void use(ICharacter& target);
};
#endif
