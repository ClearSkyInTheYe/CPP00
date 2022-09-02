#include "Contact.hpp"

Contact::Contact( void )
{
	// std::cout << "Contact constructed" << std::endl;
	return;
}

Contact::~Contact( void )
{
	// std::cout << "Contact dectructor called" << std::endl;
	return;
}

void Contact::get_last_name(void)
{
	std::cout << "Last name: ";
	std::getline(std::cin, this-> _last_name);
}