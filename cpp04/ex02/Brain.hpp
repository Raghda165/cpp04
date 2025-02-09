/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 20:05:03 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/04 21:37:07 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
 #include <iostream>
class Brain
{
	private:
	  std::string ideas[100];
	public:
	  Brain();
	  Brain(const Brain &obj);
	  Brain & operator=(const Brain &other);
	  ~Brain();
};
#endif
