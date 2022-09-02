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

//	const std::string get_first_name(void);
//	std::string get_last_name(void);
//	std::string get_nickname(void);
//	std::string get_number(void);
//	std::string get_darkest_secret(void);
	void get_last_name(void);
};


#endif