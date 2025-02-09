#include "WrongCat.hpp"

WrongCat ::WrongCat()
{
	this->_type = "Wrongcat";
	std::cout<<"the Wrongcat has been created"<<"\n";
}

WrongCat:: WrongCat(const WrongCat &obj):WrongAnimal(obj)
{
	_type = std::string (obj._type);
}

WrongCat & WrongCat:: operator=(const WrongCat & other)
{
	if (this == &other)
		return (*this);
	else
	{
		this->_type  = other._type;
	}
	std::cout<<"Copy assignment operator called"<<std::endl;
	return (*this);
}

WrongCat :: ~WrongCat ()
{
	std::cout<<"the Wrongcat has been destroyed"<<std::endl;
}
void WrongCat::makeSound()const
{
	std::cout<<"Meaw Meaw"<<std::endl;

}