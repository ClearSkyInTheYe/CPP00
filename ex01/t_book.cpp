#include "Contact.hpp"

int main(void)
{
	Contact c;
	std::string cmd;

	while (1)
	{
		c.get_last_name();
//		std::cout << "Please, enter command: ";
//		std::getline(std::cin, cmd);
		std::cout << cmd << std::endl;
	}
}