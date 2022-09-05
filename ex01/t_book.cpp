#include "Contact.hpp"
#include "Book.hpp"

int main(void)
{
	Contact c;
	Book	b;
	std::string cmd;

	while (1)
	{
		std::cout << "Please, enter command: ";
		std::getline(std::cin, cmd);
		if (cmd.length() == 0)
			break ;
		if (!cmd.compare("ADD"))
			b.set_c();
		else if (!cmd.compare("SEARCH"))
		{
			b.display();
			b.select_search();
		}
		else if (!cmd.compare("EXIT"))
			break ;
		else
			std::cout << "Availible commands are: ADD, SEARCH and EXIT\n";
	}
}