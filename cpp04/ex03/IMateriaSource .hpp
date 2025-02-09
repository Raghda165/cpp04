/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource .hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 15:08:25 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/08 15:18:52 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP
 #include "AMateria.hpp"
class IMateriaSource
{
	public:
	  virtual ~IMateriaSource() {}
	  virtual void learnMateria(AMateria*) = 0;
	  virtual AMateria* createMateria(std::string const & type) = 0;
};
#endif
