#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contact {
	std::string		_first_name;
	std::string		_last_name;
	std::string		_nickname;
	std::string		_number;
	std::string		_darkest_secret;
public:
	Contact(void);
	~Contact(void);

	void set_all(void);
	void display_c(int i);
	std::string get_v(int i);
};


#endif