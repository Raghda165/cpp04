#include "WrongAnimal.hpp"
WrongAnimal :: WrongAnimal()
{
	std::cout<<"the WrongAnimal row has been created "<<"\n";
}
WrongAnimal:: WrongAnimal(const WrongAnimal &obj)
{
	_type = std::string (obj._type);
}

WrongAnimal  & WrongAnimal:: operator=(const WrongAnimal & other)
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
std::string WrongAnimal::getType()const
{
	return(this->_type);
}

WrongAnimal :: ~WrongAnimal()
{
	std::cout <<"the WrongAnimal object has been destroyed"<<"\n";
}

void WrongAnimal::makeSound()const
{
	std::cout <<"make sound"<<"\n";
}
