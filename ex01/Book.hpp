#ifndef BOOK_HPP
# define BOOK_HPP
#include "Contact.hpp"

class Book{
	Contact c[8];
	int	_i;
public:
	Book(void);
	~Book(void);

	void set_c(void);
	void display(void);
	void select_search();
};

#endif