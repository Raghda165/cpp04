/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 15:17:39 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/08 17:57:03 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
 #include"IMateriaSource .hpp"
class MateriaSource:public IMateriaSource
{
  private:
	AMateria *inventory[4];
  public:
	MateriaSource();
	MateriaSource(const MateriaSource &obj);
	MateriaSource & operator=(const MateriaSource &other);
	~MateriaSource();

	void learnMateria(AMateria* a);
	AMateria* createMateria(std::string const & type);
};


#endif
