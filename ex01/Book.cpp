#include "Book.hpp"

Book::Book()
{
	this->_i = 0;
	return ;
}

Book::~Book()
{
	return ;
}

void Book::set_c()
{
	int x = 0;

	if (this->_i == 8)
	{
		x = 1;
		this->_i = 0;
	}
	this->c[this->_i].set_all();
	this->_i++;
	if (x == 1)
		this->_i = 7;
}

void Book::display()
{
	int i = 0;

	if (this->_i == 0)
	{
		std::cout << "The PhoneBook is empty.\n";
		return ;
	}
	std::cout << "+----------+----------+----------+----------+\n";
	std::cout << "| INDEX    | F.NAME   | L.NAME   | NICKNAME |\n";
	std::cout << "+----------+----------+----------+----------+\n";
	while (i < this->_i)
	{
		this->c[i].display_c(i + 1);
		i++;
	}
	std::cout << "+----------+----------+----------+----------+\n";

}

static int isn(std::string s)
{
	int i = 0;

	while(s[i])
	{
		if (std::isdigit(s.at(i++)) == 0)
			return (1);
	}
	return (0);
}

void Book::select_search()
{
	std::string n;
	int			x;

	std::cout << "Please, enter index number:";
	std::getline(std::cin, n);
	if (isn(n))
	{
		std::cout << "AAAThe number should be from 1 to " << this->_i << "\n";
		return ;
	}
	if (isn(n))
	{
		std::cout << "The number should be from 1 to " << this->_i << "\n";
		return ;
	}
	x = std::stoi(n);
	if (x > this->_i + 1 || x < 1 )
	{
		std::cout << "The number should be from 1 to " << this->_i;
		return ;
	}
	std::cout << "+----------+----------+----------+----------+\n";
	std::cout << "First name:      " << this->c[x - 1].get_v(0) << "\n";
	std::cout << "Last name:       " << this->c[x - 1].get_v(1) << "\n";
	std::cout << "Nickname:        " << this->c[x - 1].get_v(2) << "\n";
	std::cout << "Phone Number:    " << this->c[x - 1].get_v(3) << "\n";
	std::cout << "Darkest Secret:  " << this->c[x - 1].get_v(4) << "\n";
	std::cout << "+----------+----------+----------+----------+\n";
}