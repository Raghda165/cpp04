/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:52:53 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/08 18:37:13 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
 #include "ICharacter.hpp"
 typedef struct s_list
{
	AMateria*			content;
	struct s_list	*next;
}t_list;
 class Character: public ICharacter
 {
	private:
	  std:: string name;
	  t_list *unequip_list;
	AMateria *inventory[4];

	public:
	  Character(std::string name);
	  Character(const Character & obj);
	  Character & operator=(const Character &other);
	  ~Character();

	  std::string const & getName() const;
	  void equip(AMateria* m);
	  void unequip(int idx);
	  void use(int idx, ICharacter& target);

 };
#endif
