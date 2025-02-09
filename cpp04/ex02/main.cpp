/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:18:01 by ryagoub           #+#    #+#             */
/*   Updated: 2025/02/07 19:27:08 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
int main()
{
	int n = 5;
	Animal **a;
	a = new Animal*[n];
	for(int i= 0 ; i < n;i++)
	{
		if(i < n/2)
		  a[i]=  new Cat();
		else
		  a[i]= new Dog();
		a[i]->makeSound();
	}
	for(int i= 0 ; i < n;i++)
	{
		delete a[i];
	}
	delete []a;
}
