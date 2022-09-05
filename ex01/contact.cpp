#include "Contact.hpp"

Contact::Contact( void )
{
	return;
}

Contact::~Contact( void )
{
	return;
}

void Contact::set_all(void)
{
	std::cout << "First name: ";
	std::getline(std::cin, this-> _first_name);
	std::cout << "Last name: ";
	std::getline(std::cin, this-> _last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin, this-> _nickname);
	std::cout << "Phone Number: ";
	std::getline(std::cin, this-> _number);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, this->_darkest_secret);
	std::cout << "Contact " << this->_nickname << " created" << std::endl;
}

void Contact:: display_c(int i)
{
	int x = 0;

	std::cout << "|";
	while (x < 9)
	{
		std::cout << " ";
		x++;
	}
	std::cout << i;
	std::cout << "|";
	if (this->_first_name.length() <= 10)
	{
		x = this->_first_name.length();
		while (x < 10)
		{
			std::cout << " ";
			x++;
		}
		std::cout << this->_first_name;
		std::cout << "|";
	}
	else
		std::cout << this->_first_name.substr(0, 9) << "." << "|";
	if (this->_last_name.length() <= 10)
	{
		x = this->_last_name.length();
		while (x < 10)
		{
			std::cout << " ";
			x++;
		}
		std::cout << this->_last_name;
		std::cout << "|";
	}
	else
		std::cout << this->_last_name.substr(0, 9) << "." << "|";
	if (this->_nickname.length() <= 10)
	{
		x = this->_nickname.length();
		while (x < 10)
		{
			std::cout << " ";
			x++;
		}
		std::cout << this->_nickname;
		std::cout << "|";
	}
	else
		std::cout << this->_nickname.substr(0, 9) << "." << "|";
	std::cout << "\n";
}

std::string Contact::get_v(int i)
{
	if (i == 0)
		return (this->_first_name);
	if (i == 1)
		return (this->_last_name);
	if (i == 2)
		return (this->_nickname);
	if (i == 3)
		return (this->_number);
	if (i == 4)
		return (this->_darkest_secret);
	return ("0");
}