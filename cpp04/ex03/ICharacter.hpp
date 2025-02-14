/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 20:34:57 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/08 19:55:04 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP
 #include "AMateria.hpp"
class AMateria;
class ICharacter
{
  public:
   virtual ~ICharacter() {}
   virtual std::string const & getName() const = 0;
   virtual void equip(AMateria * m) = 0;
   virtual void unequip(int idx) = 0;
   virtual void use(int idx, ICharacter& target) = 0;
};
#endif
